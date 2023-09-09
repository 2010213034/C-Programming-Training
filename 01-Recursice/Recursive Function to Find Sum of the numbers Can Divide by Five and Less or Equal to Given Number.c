#include <stdio.h>
int sum(int n);
int main() {
    int number, result;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    result = sum(number);
    printf("sum = %d", result);
    return 0;
}
int sum(int n) {
    if (n == 0)
        return n;
    else if(n%5 == 0)
        return n + sum(n-5);
        else
            n=n-n%5;
        return n + sum(n-5);
}
