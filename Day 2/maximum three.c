#include <stdio.h>
int main() {
  int a=10,b=100,c=30;
  if(a>=b && a>=c)
  printf("A is Maximum=%d\n",a);
  else if(b>=a && b>=c)
  printf("B is Maximum=%d\n",b);
  else
  printf("C is Maximum=%d\n",c);
  return 0;
}