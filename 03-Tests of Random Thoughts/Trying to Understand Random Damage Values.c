#include <stdio.h>
#include <stdlib.h>

int main()
{
int damage,enemyhp=10,yourhp=10;
while(enemyhp!=0||yourhp!=0){
 damage = rand()%3+1;
printf("you gave %d damage\n",damage);
enemyhp-=damage;
if(enemyhp<=0){
    printf("you have won\n");
    return 0;
}
damage=rand()%5;
printf("you took %d damage\n",damage);
yourhp-=damage;
}
printf("You have lost\n");
return 0;
}
