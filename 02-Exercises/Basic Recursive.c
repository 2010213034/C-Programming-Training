#include <stdio.h>
int sum(int num){
if(num==0)
    return 0;
    else
        return(num + sum(num-1));
}

int main()
{
    int num = 10;
printf("result  is %d" , sum(num));
return 0;
}
