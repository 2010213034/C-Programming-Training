#include <stdio.h>
int fun(int a, int b){
if(a == b)
return a;
else
    return fun(a-1, b+1);
}
int main(){
int a, b, c;
printf("please enter an even number\n");
scanf("%d" ,&a);
printf("please enter the second even number\n");
scanf("%d" ,&b);
if (a%2 != 0 || b%2 != 0){
    printf("both numbers must be even\n");
    return main();
}
if (a < b){
    c=a;
    a=b;
    b=c;
}
    printf("mean is: %d" , fun(a,b));
    getchar();
}
