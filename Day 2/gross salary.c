#include <stdio.h>
int main() {
    float basic,hra,da,grosssalary;
    printf("Enter basic,hra,da value:");
    scanf("%f%f%f",&basic,&hra,&da);
    grosssalary=basic+hra+da;
    printf("gross salary=%f\n",grosssalary);
    return 0;
}