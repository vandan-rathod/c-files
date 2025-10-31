#include<stdio.h>

float interestCalc(float *p,float *r,int *n){
    *r= *r/100;
    float i=(*p)*(*r)*(*n);
    return i;
}

int main(){
    float p;
    float r;
    int n;
    printf("Enter amount: ");
    scanf("%f",&p);
    printf("Enter rate: ");
    scanf("%f",&r);
    printf("Enter number of years");
    scanf("%d",&n);
    float i=interestCalc(&p,&r,&n);
    printf("interest to be paid: %.2f",i);
    return 0;
}