#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a,b,c;
  printf("please enter three numbers\n");
  scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
        if(a>b){
    if(a>c){
        printf("first number is greatest");
    }
    else{
        printf("thirs number is greatest");
    }
  }
  else if(b>c){
    printf("second number is greatest");
  }
  else{
    printf("third number is greatest");
  }
}
