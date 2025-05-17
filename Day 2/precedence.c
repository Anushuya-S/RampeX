#include <stdio.h>
int main() {
    int a,b,c,result;
    printf("Enter value for a,b and c:");
    scanf("%d%d%d",&a,&b,&c);
    result=a+b-c*(a/b)+c;
    printf("Result=%d\n",result);
    return 0;
}