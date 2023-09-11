#include <stdio.h>
#include <stdlib.h>

int main(){
    int num,i,sum=0;
printf("enter a number");
scanf("%d",&num);
while(10*num>10){
    i=num%10;
    sum+=i;
    num/=10;
}
printf("%d",sum);
return 0;
}
