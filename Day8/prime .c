#include <stdio.h>
int isPrimeNumber(int num) {
    int i;
    if (num<=1) {
        return 0; 
    }
    for (i=2;i*i<=num;i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (isPrimeNumber(num)) {
        printf("%d is a prime number\n",num);
    } else {
        printf("%d is not a prime number\n",num);
    }
    return 0;
}
