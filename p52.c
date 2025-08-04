#include<stdio.h>

int main(){
    int a[10],max,min,i;
    for ( i = 0; i <=9 ; i++)
    {
        printf("Enter a value=");
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for ( i = 0; i <=9 ; i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }
        if (a[i]<min)
        {
            min=a[i];
        }
    }
    printf("Maximum=%d\n",max);
    printf("Minimum=%d",min);
    
    return 0;
}