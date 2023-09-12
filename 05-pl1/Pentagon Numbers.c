#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n=1, pn;
   while(pn<100){
    pn=(3*n*n-n)/2;
    if(pn<100)
    printf("%d\n",pn);
    n++;
   }
   return 0;
}
