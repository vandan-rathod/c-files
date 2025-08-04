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
        if (max<a[i])
        {
            max=a[i];
        }
        if (min>a[i])
        {
            min=a[i];
        }
        
    }
    printf("Maximum=%d and its rank =1\n",max);
    printf("Minimum=%d and its rank =10",min);
    
    
    return 0;
}