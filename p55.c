#include<stdio.h>

int main(){
    int a[10],num,deno,ratio,count,i;
    count=0;
    for (int i = 0; i <= 9 ; i++)
    {
        printf("Enter a number=");
        scanf("%d",&a[i]);
    }
    for ( i = 0; i <=9; i++)
    {
        if (a[i]%5==0)
        {
            printf("The no. %d is divisible by 5\n",a[i]);
            count++;
        }
        
    }
    printf("The number of values divisible by 5 are =%d\n",count);    
    printf("The number of values not divisible by 5 are =%d\n",10-count);
    printf("The ratio of them is %.2f\n",(float)count/(10-count));    
    return 0;
}