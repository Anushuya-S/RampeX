#include <stdio.h>
int main() {
    int a,b;
    printf("Enter two values:");
    scanf("%d %d",&a,&b);
    if(a<=b)
    printf("%d is less than and equalto %d",a,b);
    else if(a==b)
    printf("%d equal to %d",a,b);
    else
    printf("False Statement");
    return 0;
}