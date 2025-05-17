#include <stdio.h>
int main() {
 float p,n,r,simpleinterest;
    printf("Enter Principal Amount,Time(duration),Rate of Interest:");
    scanf("%f %f %f",&p,&n,&r);
    simpleinterest=(p*n*r)/100;
    printf("Simple Interest=%f",simpleinterest);
  return 0;
}