#include<stdio.h>

int i;


main(){
  //print every 4th number, for-loop
  for(i = 100; i>=0; i=i-4){
    printf("%d ",i);
  }

  //print every 4th num, whil-loop
  printf("\n");
  i = 100;
  
  while(i>=0){
    printf("%d ",i);
    i = i-4;
  }
  
  i = 100;
  printf("\n");
  //print every 4th num, do while
  do{
    printf("%d ", i);
    i = i-4;
  }while(i>=0);
}
