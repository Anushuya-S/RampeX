#include <stdio.h>

int main() {
    int N,i,j;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(j=1;j<=N-i;j++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}