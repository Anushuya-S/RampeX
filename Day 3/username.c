#include <stdio.h>
#include <string.h>
int main() {
    char user[20], pass[20];
    printf("Username: ");
    scanf("%s", user);
    printf("Password: ");
    scanf("%s", pass);
    if(strcmp(user,"anu") == 0 && strcmp(pass,"pass123"
    ) == 0){
        printf("Login successful\n");
    }else{
        printf("Login failed\n");
    }
    return 0;
}
