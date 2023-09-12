#include <stdio.h>
#include <stdlib.h>

int main()
{
int t;
printf("enter temperature as celcius\n");

scanf("%d",&t);
if(t>0)
    printf("the temperature is above the freezing point");
else if(t==0)
    printf("the temperature is at  the freezing point");
else
    printf("the temperature is below the freezing point");
return 0;
}
