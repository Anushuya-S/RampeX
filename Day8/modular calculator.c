#include <stdio.h>
    int add(int a,int b){
        return a+b;
    }
    int sub(int a,int b){
        return a-b;
    }
    int mul(int a,int b){
        return a*b;
    }
    int div(int a,int b){
        return a/b;
    }
    int main() {
        printf("Addition:%d\n",add(4,2));
        printf("Subtraction:%d\n",sub(4,2));
        printf("Multiplication:%d\n",mul(4,2));
        printf("Division:%d\n",div(4,2));
        return 0;
}
