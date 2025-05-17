#include <stdio.h>
int main() {
    char name[100];
    int i = 0; 
    while ((name[i] = getchar()) != '\n') i++;
    name[i] = '\0';
    printf("Hello, %s!\n", name);  
    return 0;
}
