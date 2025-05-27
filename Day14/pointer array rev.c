#include <stdio.h>
int main() {
    int arr[3]={1,2,3};
    int *p=&arr[2];
   for(int i=2;i>=0;i--){
       printf("%d `",*p);
       p--;
   }
    return 0;
}

        or

#include <stdio.h>
int main() {
    int arr[6]={1,2,3,4,5,6};
    int *start=arr;
    int *end=arr+5;
    int temp;
    while(start<end){
    temp=*start;
    *start=*end;
    *end=temp;
     start++;
     end--;
   }
   for(int i=0;i<6;i++){
     printf("%d ",arr[i]);
   }
    return 0;
}

      or

#include <stdio.h>
int main() {
    int arr[6]={1,2,3,4,5,6};
    int *start=arr;
    int *end=&arr[5];
    int temp;
    while(start<end){
    temp=*start;
    *start=*end;
    *end=temp;
     start++;
     end--;
   }
   for(int i=0;i<6;i++){
     printf("%d ",arr[i]);
   }
    return 0;
}