#include<stdio.h>

int main(){
    int x,y,min;
    printf("Enter X=");
    scanf("%d",&x);
    printf("Enter Y=");
    scanf("%d",&y);
    if (x>y)
    {
        min=y;
    }
    else
    {
        min=x;
    }
    printf("the minimum value = %d",min);
    
    return 0;
}