#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i;
  float arr[8], total, mean;
  for (i=0;i<8;i++){
    printf("enter a float value\n");
    scanf("%f",&arr[i]);
  }
  for(i=0;i<8;i++){
    total+=arr[i];
  }
  mean=total/++i;
  printf("%f",mean);
  return 0;
}

