#include<stdio.h>
int main(){
    int n;
    printf("Total number needed:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the numbers:\n");
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    for(int i=n-1;i>=0;i--){
        if(i<n-1) {
            printf(" ");
        }
    printf("%d",arr[i]);
    }
    return 0;
}