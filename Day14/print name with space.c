#include <stdio.h>
int main(){
    char name[100];
    printf("Enter you name:");
    fgets(name,100,stdin);
    printf("%s",name);
    return 0;
}


or


#include <stdio.h>
int main() {
    char name[100];
    printf("Enter you name:");
    fgets(name,sizeof(name),stdin);
    printf("%s",name);
    return 0;
}