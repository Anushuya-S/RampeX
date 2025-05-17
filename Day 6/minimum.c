#include <stdio.h>
int main() {
    int arr[]={50,70,80,90,43};
    int min=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("The Minimum Number is:%d\n",min);
    return 0;
}
