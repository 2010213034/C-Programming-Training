#include <stdio.h>
#include <stdlib.h>

int main()
{
 int i,*ptr,mul=1,n;
 printf("enter how many numbers you will use\n");
 scanf("%d",&n);
 ptr=(int*)malloc(n*sizeof(int));
 printf("enter the numbers");
 for(i=0;i<n;i++){
 scanf("%d",ptr+i);
 mul*= *(ptr+i);
}
printf("multiplication is %d",mul);
getchar();
return 0;
}
