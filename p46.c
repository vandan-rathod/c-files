#include<stdio.h>

int main(){
    double sum=0.0;
    long long sigma;
    for (int i = 1; i <=10; i++)
    {
        double sigma=(i*(i+1))/2.0;
        sum+=(double)i/sigma;
    }
    printf("sum of series=%.61f\n",sum);

    return 0;
}