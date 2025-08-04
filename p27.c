#include<stdio.h>

int main(){
    int i,n,sum;
    //printf("Enter N=");
    //scanf("%d",&n);
    sum=0;
    for ( i = 0; i <=39 ; i++)
    {
        if (i%2!=0)
        {
            sum=sum+i;
        }
        
    }
    printf("%d",sum);
    return 0;
}