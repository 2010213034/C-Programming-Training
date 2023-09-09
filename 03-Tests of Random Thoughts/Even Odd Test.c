#include <stdio.h>
#include <stdlib.h>

int main(){
srand(time(NULL));
    int score =0;
    int num;
    char a;
    int i=0;

 printf("Type y if number is even\n");
 while(i!=1){
        num = rand()%10+1;
 printf("%d",num);
 scanf("%c",&a);
 if ((num%2==0&&(a=='y'))||((a=='n')&&num%2!=0))
    score+=1;
    else if (((a=='y')&&num%2!=0)||((a=='n')&&num%2==0))
        i=1;

}
    printf("your score is %d",score);
getchar();
}
