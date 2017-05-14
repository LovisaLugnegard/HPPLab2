#include <stdio.h>
#include <stdlib.h>

void swap_nums(int*, int*);
void swap_str();

int main(){
  int a,b;
  char *s1,*s2;
  a = 3; 
  b=4;
  swap_nums(&a,&b);
  printf("a=%d, b=%d\n", a, b);
  s1 = "second"; 
  s2 = "first";
  swap_str(&s1,&s2);
  printf("s1=%s, s2=%s\n", s1, s2);
  return 0;
  }
  
void swap_nums(int *x, int *y){
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}  

void swap_str(int *x, int *y){
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}  
