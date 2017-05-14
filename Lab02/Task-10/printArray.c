#include <stdio.h>
#include <stdlib.h>

void print_array();

int main(){
  int *arr;
  int n, i;
  printf("\nEnter size of array ");
  scanf("%d", &n);
  arr = (int *)malloc(n*sizeof(int));
  for(i=0; i<n; ++i){
    arr[i] = rand() % 100;// random number from 0 to 99
  } 

  print_array(arr, n);
  printf("\n");
  return 0;
}
  
void print_array(int *arr, int n){
  int i;
  for(i=0; i<n; i++){
    printf("%d ", arr[i]);
  }
}  
