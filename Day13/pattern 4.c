#include <stdio.h>

int main() {
    int N,i,j,k;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        for(j=0;j<N-i-1;j++){
            printf(" ");
        }
        for(int k=0;k<2*i+1;k++){
                printf("*");
            }
        
        printf("\n");
    }
    for(i=0;i<N;i++){
        for(j=0;j<i;j++){
            printf(" ");
        }
        for(k=0;k<2*(N-i)-1;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}