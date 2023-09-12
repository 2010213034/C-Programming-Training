#include <stdio.h>
#include <stdlib.h>

int main()
{
 int arr[10],i;
 for(i=0;i<10;i++){
    scanf("%d",&arr[i]);
 }
 while(i-1>=0){
    printf("%d",arr[i-1]);
    i--;
 }
 return 0;
}
