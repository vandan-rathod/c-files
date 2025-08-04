#include<stdio.h>
#include<math.h>

int main(){
    long int p,n;
    float r,a,i;
    printf("Enter Principle amount=");
    scanf("%ld",&p);
    printf("Enter rate of interest=");
    scanf("%f",&r);
    printf("Enter number of years=");
    scanf("%ld",&n);
    a=(float)p*pow(1.0+r/12,12*n);
    i=(float)a-p;
    printf("final amount=%.2f\n",a);
    printf("compound interest=%.2f\n",i);    
    return 0;
}