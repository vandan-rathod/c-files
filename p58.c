#include<stdio.h>

int main(){
    int a[10],i,j,minindex,t;
    for ( i = 0; i <=9 ; i++)
    {
        printf("Enter a number=");
        scanf("%d",&a[i]);
    }
    for ( i = 0; i <=8 ; i++)
    {
        for ( j = 0; j < 4-i; j++)
        {
            if (a[j]>a[j+1])
            {
                t=a[j+1];
            a[j+1]=a[j];
            a[j]=t;
            }
            
        }
        
        
    }
    printf("sorted array:\t");
    for ( i = 0; i < 10; i++)
    {
        printf("%d ",a[i]);
    }
    
    
    return 0;
}