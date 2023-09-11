#include <stdio.h>
#include <stdlib.h>
selectionsort(int array[],int n){
int i,k;
int smallest , index;
for (i=0;i<n-1;i++){
smallest = array[n-1];
index = n-1;
for(k=i;k<n-1;k++){
    if(array[k]<smallest){
        smallest=array[k];
        index=k;
    }
}
array[index]=array[i];
array[i]=smallest;
}
}
selectionsort(int[],int);
int main()
{
int i=0,a[5];
printf("please enter five numbers\n");
while(i<5){
    scanf("%d",&a[i]);
    i++;
}
i=0;
selectionsort(a,5);
printf("\n");
while(i<5){
printf("%d",a[i]);
i++;
}
return 0;
}
