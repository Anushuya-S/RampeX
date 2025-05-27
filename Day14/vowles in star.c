#include <stdio.h>
#include<ctype.h>
int main(){
    char str[50];
    int vowels=0;
    int consonants=0;
    printf("Enter the line:");
    fgets(str,50,stdin);
for(int i=0;str[i]!='\0';i++){
    int ch=tolower(str[i]);
    if(ch>='a'&&ch<='z'){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
           str[i]='*';
        }
    }
}
  printf("%s",str);
    return 0;
}