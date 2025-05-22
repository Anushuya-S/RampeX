#include <stdio.h>
int Digits(int i){
    int sum=0;
    if(i==0){
        return 0;
    }
        else{
            return (i%10)+Digits(i/=10);
    }
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Sum of digits = %d\n",Digits(num));
    return 0;
}
