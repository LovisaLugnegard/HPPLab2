#include<stdio.h>

int width, height, i, j;

main(){
  printf("\nEnter width of rectangle:");
  scanf("%d", &width);
  printf("\nEnter height of rectangle:");
  scanf("%d", &height);
  
  printf("\n width = %d height = %d \n", width, height);  
  
  
  for(i=0; i<width-1; i++){
    printf("*");
  }
  
  for(i=1; i<height-1; i++){
    printf("*\n*");
    
    for(j=1; j<width-1; j++){
      printf(".");
    }
    
  }
  printf("*\n");
  for(i=0; i<width; i++){
    printf("*");
  }
  printf("\n");
}
