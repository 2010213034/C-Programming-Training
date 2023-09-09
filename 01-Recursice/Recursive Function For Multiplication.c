#include <stdio.h>
unsigned int multiply(unsigned int x, unsigned int y){
if (x == 1){
return y;
}
else if (x > 1){
return y + multiply(x-1, y);
}
return 0;
}
int main() {
    int x , y;
    printf("please enter first number\n");
    scanf("%d" ,&x);
    printf("please enter the second number\n");
    scanf("%d" ,&y);
    if (x < 0 || y < 0){
        printf("invalid value");
    }
    printf("%d times %d is %d", x , y , multiply(x, y));
return 0;
}
