#include <stdio.h>
#include <stdlib.h>
int fun(a);
int c=0;
int main()
{
    int i;
  scanf("%d",&i);
  fun(i);
  return 0;
}
fun(a){
if (a==0){
    printf("%d",c);
    return 0;
}
    else{
       c++;
        return fun(a/2);
}
}
