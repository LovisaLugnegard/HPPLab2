#include <stdio.h>
#include <stdlib.h>

int i, maxIndex;
int *array;


main(){
  array = malloc(3*sizeof(int));
  printf("\nEnter three integers ");
  scanf("%d %d %d", &array[0], &array[1], &array[2]);
  
  maxIndex = 0;
  
  for(i=1; i<3; i++){
    if(abs(array[i])>abs(array[maxIndex])){
      maxIndex = i;
    }
  }
  
  printf("\nThe max value is: %d\n", array[maxIndex]);
}
