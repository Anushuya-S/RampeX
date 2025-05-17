#include <stdio.h>
int main() {
  int a=55;
  if(a%5==0 && a%11==0)
  printf("The number is divisible by both 5 and 11",a);
  else
  printf("The number is not divisible");
  return 0;
}