#include <stdio.h>
int main() {
    int a=15;
    int *p=&a;
    printf("%p\n",&a); //stores address
    printf("%d\n",*p); //stores values
    printf("%d\n",p); //stores address
    printf("%p\n",p+1);  //add byte by a at last address
     printf("%d\n",&p); //pointer memory address stores
    return 0;
}