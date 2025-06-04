#include<stdio.h>
int main() {
    int n,even=0,odd=0;
    printf("Total number needed: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the numbers:\n");
    for(int i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }
    printf("Even Numbers: ");
    for(int i=0;i<n;i++) {
        if(arr[i] % 2==0) {
            printf("%d ",arr[i]);
            even++;
        }
    }
    printf("\nOdd Numbers: ");
    for(int i = 0;i<n; i++) {
        if(arr[i] % 2!=0) {
            printf("%d ",arr[i]);
            odd++;
        }
    }
    return 0;
}

