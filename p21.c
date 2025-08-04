#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d;
    printf("Enter A=");
    scanf("%d",&a);
    printf("Enter B=");
    scanf("%d",&b);
    printf("Enter C=");
    scanf("%d",&c);
    printf("Your equation is %dx²+ %dx + %d\n",a,b,c);
    d=pow(b,2)-4*a*c;
    if (d>0)
    {
        printf("there are 2 real solutions");
    }
    else if (d=0)
    {
        printf("there is only one real solution possible");
    }
    else
    {
        printf("there are no real roots");
    }
    
    return 0;
}