#include <stdio.h>
void Fibonacci(int n) {
    int a=0,b=1,c,i;
    for(i=1;i<=n;i++) {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
}
int main(){
    int t;
    printf("Enter number of terms: ");
    scanf("%d", &t);
    Fibonacci(t);
    return 0;
}
