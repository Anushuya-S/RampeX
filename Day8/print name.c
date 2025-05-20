#include <stdio.h>
void greet(char name[],char role[]){
    printf("Hello %s welcome to %s",name,role);
}
int main() {
    char name[100];
    char role[100];
    printf("Enter your name:");
    scanf("%s",&name);
    printf("Enter your roll:");
    scanf("%s",&role);
    greet(name,role);
  
    return 0;
}
