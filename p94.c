#include<stdio.h>
int fact(int n){
    // int result=1;
    if(n==0||n==1){
        return 1;
    }
    n = n*fact(n-1);
    return n;
}
int nPr(int n,int r){
    return (fact(n)/fact(n-r));
}
int main(){
    int n,r,result;
    printf("Enter N:");
    scanf("%d",&n);
    printf("Enter R:");
    scanf("%d",&r);
    int product=nPr(n,r);
    printf("P(%d,%d)=%d",n,r,product);
    return 0;
}