#include <stdio.h>
int power(int a,int b){
    if(b==0){
        return 1;
    }
    else{
        return a*power(a,b-1);
    }
}
int main() {
    int num1,num2;
    printf("Enter a number for num1: ");
    scanf("%d",&num1);
    printf("Enter a number for num2: ");
    scanf("%d",&num2);
    printf("%d power %d is= %d\n",num1,num2,power(num1,num2));
    return 0;
}

