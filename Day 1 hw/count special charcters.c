#include <stdio.h>
int main() {
    char str[]="CSA@#!IT";
    int count=0;
    for (int i=0;str[i];i++){
        if (!((str[i]>='A'&&str[i]<='Z')||
              (str[i]>='a'&&str[i]<='z')||
              (str[i]>='0'&&str[i]<='9'))){
                   count++;
              }
            }
    printf("Special charcters in the string: %d\n",count);
    return 0;
}
