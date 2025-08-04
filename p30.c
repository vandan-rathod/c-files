#include<stdio.h>

int main(){
    int result,num,n;
    printf("Enter the number=");
    scanf("%d",&num);
    printf("how many times to multiply=");
    scanf("%d",&n);
    result=1;
    while (n>0)
    {
        result *=num;
        n--;
    }
    printf("%d",result);
    return 0;
}