#include<stdio.h>

int main(){
    int x,y,z,min;
    printf("Enter X=");
    scanf("%d",&x);
    printf("Enter Y=");
    scanf("%d",&y);
    printf("Enter Z=");
    scanf("%d",&z);
    min=x;
    if (min>y)
    {
        min=y;
    }
    if(min>z)
    {
        min=z;
    }
    printf("the minimum value =%d",min );
    return 0;
}