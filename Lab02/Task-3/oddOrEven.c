#include <stdio.h>

int a, i, numOfDigits, firstDigit;

main(){
  printf("\n Enter an integer ");
  scanf("%d", &a);
 
  i = a; 
  while(i>=10){
    i = i/10;   
  }
  
  if(i%2){
    printf("\nThe first digit is odd.");
  }
  else{
    printf("\nThe first digit is even.");
    }
 

}
