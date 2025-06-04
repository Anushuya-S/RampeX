#include <stdio.h>
int main(){
    char str[100];
    printf("Enter string:");
    scanf("%s",str);
    printf("Password format: ");
    for (int i=0;str[i];i++){
        printf("*");
}
    printf("\n");
    return 0;
}

