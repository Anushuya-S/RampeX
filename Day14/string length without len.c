#include <stdio.h>
int main(){
    char name[50];
    int length=0;
    printf("Enter a name:");
    fgets(name,50,stdin);
    while(name[length]!='\0'&&name[length]!='\n'){
        length++;
    }
    printf("%d",length);
    return 0;
}