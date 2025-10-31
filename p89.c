#include<stdio.h>

void avg(int *a,int *b){
    printf("averae of 2 numbers is: %.2f",(float)(*a+*b)/2);
}
int main(){
    int x,y;
    printf("Enter a number");
    scanf("%d",&x);
    printf("Enter a number");
    scanf("%d",&y);
    avg(&x,&y);
    return 0;
}