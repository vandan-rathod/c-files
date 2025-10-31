#include<stdio.h>
int power(int *a,int *b){
    int result=1;
    for (int i = 0; i <= *b ; i++)
    {
        result *= *a;
    }
    return result;
}
int main(){
    int base,exp;
    printf("Enter base ");
    scanf("%d",&base);
    printf("Enter power: ");
    scanf("%d",&exp);
    int result=power(&base,&exp);
    printf("%d",result);
    return 0;
}