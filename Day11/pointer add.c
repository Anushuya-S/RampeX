#include<stdio.h>
int main(){
  int a=10,b=5;
  int *x=&a;
  int *y=&b;
  int z=*x+*y;
  printf("Adding of %d and %d is:%d",a,b,z);
  return 0;
} 