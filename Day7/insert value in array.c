#include <stdio.h>
int main(){
    int arr[6]={48,76,32,12,42};
    int n=5,i,num=35,pos=2;
    for(i=n;i>pos;i--) {
        arr[i]=arr[i-1];
    }
    arr[pos]=num;
    n++;
    printf("The inserted value is:");
    for (i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
