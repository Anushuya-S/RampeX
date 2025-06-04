#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Total number needed:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the numbers:\n");
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d",sum);
        sum+=arr[i];
    }
    return 0;
}