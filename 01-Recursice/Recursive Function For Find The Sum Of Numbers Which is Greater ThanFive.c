#include <stdio.h>
int sum (int num){
if (num != 0){
    int x;
        if (num%10 >= 5){
return (num%10 + sum (num / 10));
        }
        else if(num%10 < 5){
            return (sum (num / 10));
        }
}
else{
return 0;
}
}
int main(){
int num, result;
printf("Enter the number: ");
scanf("%d", &num);
result = sum(num);
printf("Sum of digits which is greater than five in %d is %d\n", num, result);
return 0;
}
