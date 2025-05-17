#include <stdio.h>
int main() {
   int c,java,python,html;
   int sum,avg;
   char grade;
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
   if (avg>=90) {
        grade='A';
    }else if(avg>=80) {
        grade='B';
    }else if(avg>=70) {
        grade='C';
    }else if (avg>=60) {
        grade='D';
    }else{
        grade='F';
    }
    printf("Grade=%c\n",grade);
   return 0;
}