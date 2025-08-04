#include<stdio.h>
#include<math.h>

int main(){
    int r;
    float a,v;
    printf("Enter radius = ");
    scanf("%d",&r);
    a=4*3.14*pow(r,2);
    v=(1.33)*3.14*pow(r,3);
    printf("surface area = %.2f\n",a);
    printf("volume = %.2f",v);
    return 0;
}