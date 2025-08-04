#include<stdio.h>

int main(){
    int a[5],i,tot;
    float avg;
    for ( i = 0; i <=4; i++)
    {
        printf("Enter a number=");
        scanf("%d",&a[i]);
    }
    tot=0;
    for ( i = 0; i <=4 ; i++)
    {
        tot=tot+a[i];
    }
    
    
    //tot=a[0]+a[1]+a[2]+a[3]+a[4];
    avg=(float)tot/5;
    printf("total =%d\n",tot);
    printf("average = %.2f",avg);
    
    return 0;
}