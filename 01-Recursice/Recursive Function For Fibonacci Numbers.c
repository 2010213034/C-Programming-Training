#include <stdio.h>
long fibonacci(long n){
if(n == 0 || n == 1)
    return n;
else
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main(){
long i, n;
printf("please enter the number you wish: ");
scanf("%d" , &n);
if (n < 1){
    printf("invalid value");
    return 0;
}
if (n > 40){
    printf("value is too high");
    return 0;
}
for (i = 1; i <= n; i++);
printf("your number is %d. step and it is %ld\n" , n, fibonacci(i));
return 0;
}
