#include<stdio.h>

int main(){
    int x;
    printf("Enter X=");
    scanf("%d",&x);
    if (x%2==0)
    {
        printf("The entered number is even");
    }
    else
    {
        printf("The entered number is odd");
    }
    
    return 0;
}