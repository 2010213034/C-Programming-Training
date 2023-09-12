#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a, i=0, arr[5];
   printf("please enter a number 0 to 99999\n");
   scanf("%d",&a);
    if(a/10==0){
        arr[0]=a;
        printf("%d",arr[0]);
        return 0;
   }
  else{
    while(a>0){
        arr[i]=a%10;
        a/=10;
        i++;
    }
   }
   while (i-1>=0){
   printf("%d\n",arr[i-1]);
   i--;
   }
   return 0;
}


