#include <stdio.h>
#include <string.h>
int main() {
    char str[100],temp;
    printf("Enter a string:");
    scanf("%s",&str);
    int n,len=strlen(str);
    printf("Enter number of time to rotate:");
    scanf("%d",&n);
    n%=len;
    for(int i=0;i<n;i++){
        temp=str[0];
        for (int j=0;j<len-1;j++)
            str[j]=str[j+1];
        str[len-1]=temp;
    }
    printf("Output: %s\n", str);
    return 0;
}
