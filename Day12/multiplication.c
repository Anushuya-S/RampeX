#include <stdio.h>
int main() {
    int i,num;
    scanf("%d",&num);
    for(i=1;i<=10;i++){
        int result=num*i;
        printf("%d x %d = %d\n",num,i,result);
    }
    
    return 0;
}