#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f=1,n,i;
    printf("please enter a number to take factorial");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
       f*=i;
    }
    printf("factorial of your number is:%d",f);
    return 0;
}
