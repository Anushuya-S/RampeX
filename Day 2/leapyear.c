#include <stdio.h>
int main() {
 int year=2025;
 if(year%4==0 &&year%100!=0)
 printf("%d is a leap year",year);
 else
 printf("%d is not a leap year",year);
 return 0;
}