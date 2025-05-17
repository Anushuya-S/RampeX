#include <stdio.h>
int main() {
    int a=3,b=5,c=6;
    int sum=a+b;
    int sub=a-b;
    int mul=a*b*c;
    int div=b/a;
    int mod=a%b;
    printf("The sum of %d and %d is %d\n",a,b,sum);
    printf("The sub of %d and %d is %d\n",a,b,sub);
    printf("The mul of %d,%d and %d is %d\n",a,b,c,mul);
    printf("The div of %d and %d is %d\n",a,b,div);
    printf("The mod of %d and %d is %d\n",a,b,mod);
    return 0;
}