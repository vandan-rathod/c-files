#include<stdio.h>

int main(){
    int p,n;
    float r,i;
    printf("Enter principle ammount= ");
    scanf("%d",&p);
    printf("Enter rate of interest(in decimal)= ");
    scanf("%f",&r);
    printf("Enter no. of years= ");
    scanf("%d",&n);
    i=(float)p*r*n/100.00;
    printf("simple interest to pay=%.2f",i);
    return 0;
}