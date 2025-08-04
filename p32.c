#include<stdio.h>

int main(){
    int i,n,r;
    printf("Enter N=");
    scanf("%d",&n);
    for ( i = 0; i <=10 ; i++)
    {
        r=n*i;
        printf("%d x %d = %d\n",n,i,r);
    }
    
    return 0;
}