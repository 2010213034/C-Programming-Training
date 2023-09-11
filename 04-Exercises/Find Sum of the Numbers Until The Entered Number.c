#include <stdio.h>
int fun(int num, int sum){
if(num==0)
    return sum;
    else
        sum+=num;
        return(fun(num-1,sum));
}

int main()
{
    int num, sum=0;
    scanf("%d",&num);
printf("result  is %d" , fun(num, sum));
return 0;
}
