#include<stdio.h>

int calculate(int *x,int *y){
    int z=(*x)*(*y);
    return z;
}
int main(){
    int price, quantity;
    printf("Enter pruice of the product: ");
    scanf("%d",&price);
    printf("Enter quantity: ");
    scanf("%d",&quantity);
    int amount=calculate(&price, &quantity);
    printf("amount to be paid: %d",amount);
    return 0;
}