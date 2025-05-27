#include <stdio.h>
int main() {
    int n1,n2,i,sum=0;
    scanf("%d%d",&n1,&n2);
    for(i=n1;i<=n2;i++){
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}