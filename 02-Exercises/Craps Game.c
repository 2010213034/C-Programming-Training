#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int i = 2;
    int point = rand()%11+2;
    printf("your number is %d\n" , point);
    if (point == 7){
    printf("you won");
    return 0;
    }
    else if (point == 11){
        printf("you won");
        return 0;
    }
    else if (point == 2){
        printf("you lost");
        return 0;
    }
    else if(point == 3){
        printf("you lost");
        return 0;
    }
    else if (point == 12){
        printf("you lost");
        return 0;
    }
    else{
printf("roll again\n");
 int num = 0;
 while (num != point) {
    int num = rand()%11+2;
    printf("attemt %d\n" ,i++);
    printf("%d\n" , num);
 if (num == point){
    printf("you won");
    return 0;
 }
 if (num == 7){
    printf("you lost");
    return 0;
 }
 }
    }
    return 0;
}
