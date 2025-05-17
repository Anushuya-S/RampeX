#include <stdio.h>
int main() {
    int arr[5]={15,33,21,98,72};
    int even=0,odd=0;
    for (int i=0;i<5;i++) {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Even numbers are: %d\n", even);
    printf("Odd numbers are: %d\n", odd);
    return 0;
}