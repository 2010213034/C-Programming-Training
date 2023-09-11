#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    int sum=0;
    int f=0;
    int pass;
    int average;
    int student[10];
    printf("please enter a passing grade\n");
    scanf("%d" , &pass);
   for(i=0;i<10;i++){
   printf("enter grade of student");
   scanf("%d",&student[i]);
   sum+=student[i];
   if(student[i]<pass)
    f++;
   }
   average=sum/i;
   printf("class average is %d\n" , average);
   printf("failed student number is %d" , f);
   return 0;
}
