#include<stdio.h>

int main(){
    int num1,num2,max;
    printf("Enter num1 =");
    scanf("%d",&num1);
    printf("Enter num2 =");
    scanf("%d",&num2);
    if (num1>num2){
        max =num1;
    }else{
        max=num2;
    }
    printf("the greatest number =%d",max );
    return 0;
}