#include <stdio.h>
int fun(int a[], int n){
int x;
if (n == 1)
return a[0];
else
x = fun(a, n - 1);
if (x > a[n - 1])
return x;
else
return a[n - 1];
}
int main(){
    int arr[9] = { 12, 10, 300, 50, 100 , 80 , 250 , 400 , 700 };
    int n;
    printf("enter the value for the maximum step you want. (must be greater than zero and less than ten)\n");
    scanf("%d" , &n);
    if (n<1||n>9){
        printf("read the statement given to you.\n");
        return main();
    }
printf(" %d ", fun(arr, n));
getchar();
return 0;
}
