#include <stdio.h>
int main(){
    int arr[]={50,70,80,90,43};
    int max=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("The Maximum Number is:%d\n",max);
    return 0;
}

