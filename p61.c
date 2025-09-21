#include<stdio.h>

int main(){
    int a;
    float f;
    char c;
    double d;
    int *ptr1=&a;
    float *ptr2=&f;
    char *ptr3=&c;
    double *ptr4=&d;
    printf("Enter a number=");
    scanf("%d",&a);
    printf("Enter a floating point number=");
    scanf("%f",&f);
    printf("Enter a character=");
    scanf(" %c",&c);
    printf("Enter a double=");
    scanf("%lf",&d);
    printf("the number entered is %d and the address is %p\n",a,ptr1);
    printf("the real number entered is %f and the address is %p\n",f,ptr2);
    printf("the character entered is \'%c\' and the address is %p\n",c,ptr3);
    printf("the real number entered is %lf and the address is %p\n",d,ptr4);
    return 0;
}