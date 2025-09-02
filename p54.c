#include<stdio.h>

int main(){
    int a[10],max,min,sum;
    float avg;
    for (int i = 0; i <=9; i++)
    {
        printf("Enter a number=");
        scanf("%d",&a[i]);
    }
    sum=0;
    for (int i = 0; i <=9 ; i++)
    {
        sum=sum+a[i];
    }
    max=a[0];
    min=a[0];
    for (int i = 0; i <=9 ; i++)
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
    avg=(float)sum/10;
    printf("maximum=%d\n",max);
    printf("minimum=%d\n",min);
    printf("sum=%d\n",sum);
    printf("average=%.2f\n",avg);
    
    return 0;
}