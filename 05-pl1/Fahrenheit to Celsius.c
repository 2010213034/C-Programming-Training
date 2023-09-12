#include <stdio.h>
#include <stdlib.h>

int main()
{
int f;
float c;
printf("please enter the temperature as fahrenheit\n");
scanf("%d",&f);
c=(f-32)/1.8;
printf("the temperature is about %f celsius",c);
return 0;
}
