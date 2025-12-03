#include<stdio.h>
#include<string.h>

typedef struct 
{
    char name[20];
    char PAN[10];
    int income;
    float taxableAmount;
    int surcharge;
}personInfo;

void userInput(personInfo *x)
{
    x->taxableAmount=0;
    printf("Enter name: ");
    scanf("%s",x->name);
    printf("Enter the PAN: ");
    scanf("%s",x->PAN);
    printf("Enter income: ");
    scanf("%d",&x->income);
}

float taxCalc(personInfo *x)
{
    if (x->income<=100000)
    {
        printf("no tax to pay!!!");
    }
    
    if (x->income<=150000 && x->income>100000)
    {
        x->taxableAmount=x->taxableAmount+(x->income-100000)*0.1;
    }
    
    if (x->income<=200000 && x->income>150000)
    {
        x->taxableAmount=x->taxableAmount+(x->income-150000)*0.2;
    }

    if (x->income<=250000 && x->income>200000)
    {
        x->taxableAmount=x->taxableAmount+(x->income-200000)*0.3;
    }

    if (x->income>250000)
    {
        x->surcharge=x->taxableAmount*0.02;
        x->taxableAmount=x->taxableAmount+(x->income-100000)*0.3+x->surcharge;
    }
    return x->taxableAmount;
}

int main(){
    personInfo x;
    userInput(&x);
    float y=taxCalc(&x);
    printf("\nhence net tax to be paid %.2f",y);
    return 0;
}