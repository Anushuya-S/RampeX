#include<stdio.h>
int main() {
    int input,sum=0;
    printf("Enter total numbers: ");
    scanf("%d",&input);
    int arr[input];
    printf("Enter the numbers:\n");
    for(int i=0;i<input;i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; 
    }
    printf("Result: %d\n", sum);
    return 0;
}
