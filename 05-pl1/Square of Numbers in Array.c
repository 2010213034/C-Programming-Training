#include <stdio.h>
#include <stdlib.h>

int main()
{
int arr[10];
int i,k,a;
for (i=0;i<10;i++){
        printf("enter a value");
    scanf("%d",&a);
    if(a!=-1)
        arr[i]=a;
        else{
            for(k=0;k<i;k++){
                printf("%d\n",arr[k]*arr[k]);
            }
            return 0;
        }
    }
    printf("array is full\n");
    for(i=0;i<10;i++){
        printf("%d\n",arr[i]*arr[i]);
    }
    return 0;
}
