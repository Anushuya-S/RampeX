#include <stdio.h>
int main() {
    float temp;
    printf("Enter a temperature:");
    scanf("%f",&temp);
    if(temp<10)
    printf("If %.2f Degree Celsius Wear Jacket",temp);
    else if(temp<20)
    printf("If %.2f Degree Celsius Wear Sweater",temp);
    else
    printf("Wear T-shirt");
    return 0;
}