#include <stdio.h>
int main() {
   int c,java,python,html;
   int sum,avg;
   printf("Mark in c:");
   scanf("%d",&c);
   printf("Mark in java:");
   scanf("%d",&java);
   printf("Mark in python:");
   scanf("%d",&python);
   printf("Mark in html:");
   scanf("%d",&html);
   sum=c+java+python+html;
   printf("Total=%d\n",sum);
   avg=sum/4;
   printf("Average=%d\n",avg);
   return 0;
}