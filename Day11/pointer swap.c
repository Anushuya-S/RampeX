#include<stdio.h>
int main(){
  int a=5,b=10;
  int *x=&a;
  int *y=&b;
  int temp=*x;
  *x=*y;
  *y=temp;
  printf("Value of a=%d\nValue of b=%d",a,b);
  return 0;
} 
