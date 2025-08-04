#include<stdio.h>

int main(){
    int x;
    printf("Enter X=");
    scanf("%d",&x);
    if (x>0)
    {
        printf("The entered number is positive");
    }
    if (x==0)//never forget to use == sign as assigning value
    {
        printf("The entered number is 0");
    }
    if (x<0)
    {
        printf("The entered number is negative");
    }
    
    return 0;
}