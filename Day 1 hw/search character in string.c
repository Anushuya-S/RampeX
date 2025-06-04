#include <stdio.h>
int main() {
    char ch='p';
    char str[100],found=0;
    printf("Enter a string:");
    scanf("%s",&str);
    for (int i=0;str[i];i++){
        if (str[i]==ch){
        found=1;
        }
    }
    if(found){
        printf("Present");
    }
    else{
        printf("Not Present");
    }
    return 0;
}
