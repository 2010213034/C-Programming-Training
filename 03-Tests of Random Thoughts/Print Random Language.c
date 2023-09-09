#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
   srand(time(NULL));
int i = rand()%4;
printf("%d\n",i);
if(i==1){
    printf("French is picked");
}
else if(i==2){
    printf("german is picked");
}
else if(i==3){
    printf("Russian is picked");
}
else if(i==4){
    printf("Italian is picked");
}
else{
    printf("Japanese is picked");
}
return 0;
}
