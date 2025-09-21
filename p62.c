#include<stdio.h>

int main(){
    int x,y,z;
    int *p;
    printf("Enter X=");
    scanf("%d",&x);
    printf("Enter Y=");
    scanf("%d",&y);
    printf("Enter Z=");
    scanf("%d",&z);
    p=&x;
    printf("the value of X=%d and address of X=%p\n",x,p);
    p--;
    printf("the value of Y=%d and address of X=%p\n",y,p);
    p--;
    printf("the value of Z=%d and address of X=%p\n",z,p);
    return 0;
}