#include<stdio.h>
int fact(int n){
    if (n==0||n==1)
    {
        return 1;
    }
    return n=n*fact(n-1);
}

int nCr(int n,int r){
    return (fact(n)/(fact(r)*fact(n-r)));    
}
int main(){
    int n,r,product;
    printf("Enter N:");
    scanf("%d",&n);
    printf("Enter R:");
    scanf("%d",&r);
    product=nCr(n,r);
    printf("C(%d,%d)=%d",n,r,product);
    return 0;
}