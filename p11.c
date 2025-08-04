#include<stdio.h>

int main(){
    int x,y,t;
    printf("Enter X=");
    scanf("%d",&x);
    printf("Enter Y=");
    scanf("%d",&y);
    t=x;
    x=y;
    y=t;
    printf("Value of X = %d\n",x);
    printf("Value of Y = %d",y);
    return 0;
}