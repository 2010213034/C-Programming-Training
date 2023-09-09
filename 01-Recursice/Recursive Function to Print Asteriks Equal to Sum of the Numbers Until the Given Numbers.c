#include <stdio.h>
fun2(int n){
int i = 0;
if (n > 1) {
fun2(n - 1);
printf("\n");
}
for (i = 0; i < n; i++)
printf(" * ");
}
fun1(int n){
if (n==0)
    return n;
else
    return n + fun1(n-1);
}
int main(){
    int n;
printf("enter a value\n");
scanf("%d" ,&n);
printf("%d\n" , fun1(n));
int b= fun1(n);
fun2(b);
getchar();
}
