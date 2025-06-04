#include <stdio.h>
int main(){
    char str[100];
    printf("Enter a string with Both Upper and Lower case letters:");
    scanf("%s",&str);
    int count=0,i=0;
    while(str[i]){
        if (str[i]>='A'&&str[i++]<='Z'){
         count++;
    }
}
    printf("Number of Uppercase letters is: %d\n", count);
    return 0;
}