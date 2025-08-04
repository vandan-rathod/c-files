#include<stdio.h>

int main(){
    int i,n;
    unsigned long long fact=1;
    printf("Enter N=");
    scanf("%d",&n);
    for ( i = n; i >0; i--)
    {
        fact*=i;
    }
    printf("%d",fact);
    return 0;
}