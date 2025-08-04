#include<stdio.h>

int main(){
    int n,i;
    i=1;
    n=0;
    while (i<=9)
    {
        n=n+i;
        i++;
    }
    printf("%d\n",n);
    
    return 0;
}