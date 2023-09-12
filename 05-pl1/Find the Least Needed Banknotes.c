#include <stdio.h>
#include <stdlib.h>

int main()
{
int m,b;
printf("enter the amount of money you want to withdraw\n");
scanf("%d",&m);
    b=m/100+(m%100)/50+(m%50)/20;
    if(10<=m%50<20)
        b++;

printf("%d",b);
return 0;
}
