#include<stdio.h>

int main(){
    int a[5],max,min,tot,i;
    float avg;
    for (size_t i = 0; i <=4; i++)
    {
        printf("Enter weight=");
        scanf("%d",&a[i]);
    }
    tot=0;
    for ( i = 0; i <=4 ; i++)
    {
        tot=tot+a[i];
    }
    max=a[0];
    min=a[0];
    for ( i = 0; i <=4 ; i++)
    {
        if(a[i]>max)max=a[i];
        if(a[i]<min)min=a[i];
    }
    avg=(float)tot/5;
    printf("average=%.2f\n",avg);
    printf("maximum=%d\n",max);
    printf("minimum=%d\n",min);

    return 0;
}