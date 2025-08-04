#include<stdio.h>

int main(){
    int rent;
    rent = 90;
    float units,amt,price,total;
    printf("Enter units consumed = ");
    scanf("%f",&units);
    printf("Enter Price = ");
    scanf("%f",&price);
    amt= units*price;
    total=amt+rent;
    printf("Amount = %.2\n",amt);
    printf("Total bill = %.2f",total);  
    return 0;
}