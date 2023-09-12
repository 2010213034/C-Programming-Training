#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a,b,c;
  printf("enter first number\n");
  scanf("%d",&a);
  printf("value of first number is %d\n",a);
  printf("enter second number\n");
  scanf("%d",&b);
  printf("value of second number is %d\n",b);
  c=a;
  a=b;
  b=c;
  printf("new value of first number is %d\n",a);
  printf("new value of second number is %d",b);
  return 0;
  }
