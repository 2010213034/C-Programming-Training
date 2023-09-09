#include <stdio.h>
#include <stdlib.h>

int division(int,int,int*);
int main()
{
int divider,dividing;
int result,remainder;
printf("Enter dividing");
scanf("%d",&dividing);
printf("Enter divider");
scanf("%d",&divider);
result=division(dividing,divider,&remainder);
printf("result:%d, remainder:%d",result,remainder);
getchar();
}
division(int dividing,int divider,int *remainder){
*remainder=dividing%divider;
return dividing/divider;
}
