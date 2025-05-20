#include <stdio.h>
int greater(int a,int b,int c){
    if(a>b&&a>c)
    return a;
    if(b>a&&b>c)
    return b;
    else
    return c;
}
int main() {
    int a,b,c;
    printf("Enter three values:");
    scanf("%d%d%d",&a,&b,&c);
    printf("The Greatest number is:%d",greater(a,b,c));
    
    return 0;
}
