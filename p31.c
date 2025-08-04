#include<stdio.h>

int main(){
    int i,t1,t2,n,next;
    t1=0;
    t2=1;
    printf("Enter N=");
    scanf("%d",&n);
    for ( i = 0; i <=n ; i++)
    {
        printf("%d\n",t1);
        next=t1+t2;
        t2=t1;
        t1=next;
    }
    
    return 0;
}