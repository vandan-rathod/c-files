#include<stdio.h>

int main(){
    char itm[50];
    int q;
    float p,d,a,n;
    printf("Enter item name :");
    fgets(itm, sizeof(itm), stdin);
    printf("Enter price =");
    scanf("%f",&p);
    printf("Enter quantity = ");
    scanf("%d",&q);
    a=p*q;
    d=a*0.1;
    n=a-d;
    printf("item name: %s\n",itm);
    printf("total price =%.2f\n",a);
    printf("discount : %.2f\n",d);
    printf("Net Amount to pay = %.2f",n);
    return 0;
}