#include <stdio.h>
#include <math.h>

#define true 1
#define false 0

int a, firstDig, lastDig, i, count;

int checkNum(int);

main(){

  printf("\nEnter integer number: ");
  scanf("%d",&a);
  
  if(checkNum(a)){
    printf("\n%d is a palindrome. ", a);  
  }
  else{
    printf("\n%d is not a palindrome.", a);
  }
}


int checkNum(int a){
  int i = a;
  if(i<10){
    return true;     
  }
  count = 0;
  while(i>=10){
    i = i/10;
    count = count +1;
  }
  firstDig = i;
  
  lastDig = a%10;
  
  i = (a-firstDig*pow(10,count)-lastDig)/10;
  
  if(lastDig == firstDig){
    checkNum(i);
  }
  else{
    return false;
  }  
}

