#include <stdio.h>
int i=0;
int fun(int n){
    if(n==0)
        return n;
    else
i++;
printf("calculating\n");
printf("step number:%d\n" , i);
    return n * fun(n-10);
}
int main(){
    int n;
printf("please enter a value can which can divided by ten:",n);
scanf("%d" ,&n);
printf("\n");
if(n>=10&&n%10==0)
fun(n);
else
    return main();
getchar();
}
