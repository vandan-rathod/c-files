#include<stdio.h>

int main(){
    int x,y,z,max;
    printf("Enter X=");
    scanf("%d",&x);
    printf("Enter Y=");
    scanf("%d",&y);
    printf("Enter Z=");
    scanf("%d",&z);
    max=x;
    if (max<y)
    {
        max=y;
    }
    if (max<z)
    {
        max=z;
    }
    else
    {
        max=x;
    }
    printf("the maximum value = %d",max);
    
    return 0;
}