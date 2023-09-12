#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a,b,c;
 printf ("enter three numbers\n");
 scanf("%d",&a);
 scanf("%d",&b);
 if (a>b){
 scanf("%d",&c);
 if (a>c){
    printf("first number is greatest");
 }
 else{
    printf("third number is greatest");
 }
 }
 else{
    scanf("%d",&c);
    if(b>c){
        printf("second number is greatest");
    }
    else{
      printf("third number is greatest");
    }
 }
}
