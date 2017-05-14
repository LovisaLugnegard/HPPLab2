#include <stdio.h>
#include <stdlib.h>

void print_array();
int is_prime();

int n, i, j;
int *array, *new_array;

main(){

  printf("Enter size of array ");
  scanf("%d", &n);
  
  array = malloc(n*sizeof(int));
  new_array = malloc(n*sizeof(int));
  printf("Enter array: ");
  for(i=0; i<n; i++){
    scanf("%d", &array[i]);
  }
  
  j = 0;
  for(i=0; i<n; i++){
    if(!is_prime(array[i])){
      new_array[j] = array[i];
      j++;
    }
  }
  
  new_array = (int *)realloc(new_array, j);  
  print_array(new_array, j);  
  printf("\n");
  free(new_array);
  free(array);
}


void print_array(int *arr, int n){
  int i;
  for(i=0; i<n; i++){
    printf("%d ", arr[i]);
  }
} 

int is_prime(int number) {
    int i;
    for (i=2; i*i<=number; i++) {
        if (number % i == 0) return 0;
    }
    return 1;
}
