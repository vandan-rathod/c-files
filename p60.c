#include<stdio.h>

int main(){
    char c;
    int a;
    float b;
    double d;
    printf("Enter a character=");
    scanf("%c",&c);
    printf("Enter a number=");
    scanf("%d",&a);
    printf("Enter a real number=");
    scanf("%f",&b);
    printf("Enter a big number=");
    scanf("%lf",&d);
    printf("the character entered is \'%c\' and the address is %d\n",c,&c);
    printf("the number entered is %d and the address is %d\n",a,&a);
    printf("the real number entered is %f and the address is %d\n",b,&b);
    printf("the real number entered is %lf and the address is %d\n",d,&d);
    return 0;
}