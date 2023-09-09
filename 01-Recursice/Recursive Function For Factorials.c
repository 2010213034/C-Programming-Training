#include <stdio.h>
long factorial(long n){
if(n<=1)
    return 1;
else
    return(n*factorial(n - 1));
   }
int main(){
    int i;
    int m;
    printf("enter a number to take factorial\n");
    scanf("%d" ,&m);
    if (m > 16){
        printf("this value cause error");
        return 0;
    }
for(i =0; i <= m; i++){
    printf("%d! = %d\n" , i, factorial(i));
}
return 0;
}
