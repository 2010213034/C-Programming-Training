#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v,f,n,gn;
printf("enter the student number\n");
scanf("%d,%d,%d",&n);
printf("enter the midterm grade\n");
scanf("%d",&v);
printf("ent&er the final grade\n");
scanf("%d",&f);
gn=(v*4/10)+(f*6/10);
if (gn>=50){
    printf("pass\n");
}
else{
    printf("failed\n");
}
printf("your grade is %d",gn);
return 0;
}
