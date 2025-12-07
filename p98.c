#include<stdio.h>

float earnings(float *basic,float *TA,float *da)
{
    float DA,HRA,CCA,MA;
    float total=0;
    
    /* for DA */
    if (*basic<7500)
    {
        DA= *basic*0.425;
    }
    else
    {
        DA= *basic*0.475;
    }

    /* for HRA */
    if (*basic<10000)
    {
        HRA = *basic*0.075;
    }
    else
    {
        HRA = *basic*0.125;
    }
    
    /* for CCA */
    CCA=(*basic+HRA+DA)*0.1;

    /* for MA */
    MA=300;

    total=DA+HRA+CCA+MA+ *basic + *TA + *da;
    return total;
}

float deduction(float *total,float *basic,float sl,float it,float lic)
{
    float pf,pt;
    float deduced=0;

    /* for pf */
    pf = *total*0.1;

    /* for pt */
    if (*basic<8000)
    {
        pt=0;
    }
    else
    {
        pt=40;
    }
    deduced = pt+pf+sl+it+lic;
    return deduced;
}

float netPay(float *total,float *deduced)
{
    return (*total - *deduced);
}

int main(){
    float basic,ta,da,total,deduced,sl,it,lic;
    printf("Enter Salary: ");
    scanf("%f",&basic);
    printf("Enter T.A.: ");
    scanf("%f",&ta);
    printf("Enter D.A.: ");
    scanf("%f",&da);
    printf("Enter S.L.: ");
    scanf("%f",&sl);
    printf("Enter I.T.: ");
    scanf("%f",&it);
    printf("Enter L.I.C.: ");
    scanf("%f",&lic);
    total= earnings(&basic,&ta,&da);
    deduced=deduction(&total,&basic,sl,it,lic);
    printf("net pay: %.2f",netPay(&total,&deduced));
    return 0;
}