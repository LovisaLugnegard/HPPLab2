#include <stdio.h>
#include <stdlib.h>

main(){

  int a = 10;
  double b = 1.2;
  char c = 'C';
  int *aptr;// = malloc(sizeof(int));
  double *bptr;// = malloc(sizeof(double));
  char *cptr;// = mallco(sizeof(char));

  aptr = &a;
  bptr = &b;
  cptr = &c; 
  
  printf("\n Value: %d, address: %d %d, size: %ld", *aptr, aptr, &a, sizeof(a));
  printf("\n Value: %g, address: %d %d, size: %ld", *bptr, bptr, &b, sizeof(b)); 
  printf("\n Value: %c, address: %d %d, size: %ld\n", *cptr, cptr, &c, sizeof(c));   
}
