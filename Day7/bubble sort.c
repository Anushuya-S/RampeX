#include <stdio.h>
int main() {
    int arr[]={48,76,32,12,42};
    int i,j,temp;
    int n=5;
    for (i=0;i<n-1;i++){
        for (j=0;j<n-1;j++){
            if (arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1]; 
                arr[j+1]=temp;
    }
        }
    }
    printf("Sorted Elements are:");
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
