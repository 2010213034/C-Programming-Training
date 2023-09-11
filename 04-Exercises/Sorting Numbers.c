#include <stdio.h>
#include <stdlib.h>
bubblesort(int arr[], int n){
int fre;
for(int i=0;i<n-1;i++){
    for(int k=0;k<n-1-i;k++){
        if (arr[k]>arr[k+1]){
            fre=arr[k];
            arr[k]=arr[k+1];
            arr[k+1]=fre;
        }
    }
}
}
bublesort(int [], int );
int main()
{
int i=0, a[5];
printf("enter the integers you wanted to sort(it is for five)\n");
while(i<5){
    scanf("%d",&a[i]);
    i++;
}
i=0;
bubblesort(a,5);
while(i<5){
    printf("%d",a[i]);
    i++;
}
return 0;
}
