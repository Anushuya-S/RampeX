#include <stdio.h>
int main() {
    int a=5,b=10;
    if(a>b)
    printf("It's False");
    else
    printf("It's True");
    printf("\n");
    if(a<=b)
    printf("%d is less than and equalto %d",a,b);
    else if(a==b)
    printf("%d equal to %d",a,b);
    else
    printf("False Statement");
    return 0;
}