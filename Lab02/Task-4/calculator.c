#include <stdio.h>

float a, b, c;

char op;

main(){
  printf("Enter number operation number ");
  scanf("%g %c %g", &a, &op, &b);
  switch(op){
    case '+' :
      c = a+b;
      break;
    case '-' :
      c = a-b;
      break;      
    case '*' : 
      c = a*b;
      break;
    case '/' :
      c = a/b;
      break;      
    default : 
      printf("\nInvalid operand.");        
  }
  
  printf("\nResult: %g\n", c);

}
