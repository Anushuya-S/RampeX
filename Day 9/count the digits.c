#include <stdio.h>
int countNumbers(long long num) {
    int count=0;
    if (num==0)
        return 1;
    while(num!=0) {
        num/=10;
        count++;
    }
    return count;
}
int main() {
    long long n;
    printf("Enter a number:");
    scanf("%lld",&n);
    printf("Number of digits:%d\n",countNumbers(n));
    return 0;
}
