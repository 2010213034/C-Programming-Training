#include <stdio.h>
#include <stdlib.h>

struct ay{
int grade;
char name[50];
int num;
struct ay *next;};
int main()
{
  int n;

  list();
  return 0;
}
list(){
int i,n;
  printf("how many students you have:");
  scanf("%d",&n);
 struct ay *head, *p;
for(i=0;i<n;i++){
    if(i==0){
        head=(struct ay*)malloc(sizeof(struct ay));
        p=head;
}
else{
    p->next=(struct ay*)malloc(sizeof(struct ay));
    p=p->next;
}
printf("enter the no:");
scanf("%d",&p->num);
printf("enter the name:");
scanf("%s",&p->name);
printf("enter the grade:");
scanf("%d",&p->grade);
printf("Student %s with No:%d has grade:%d\n",p->name,p->num,p->grade);
}
}
