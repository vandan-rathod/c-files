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
        minindex=i;
        for ( j = i+1; j <=9 ; j++)
        {
            if (a[j]>a[minindex])
            {
                minindex=j;
            }
            
        }
        t=a[i];
        a[i]=a[minindex];
        a[minindex]=t;
        
    }
    printf("sorted array:\t");
    for ( i = 0; i < 10; i++)
    {
        printf("%d ",a[i]);
    }
    
    
    return 0;
}