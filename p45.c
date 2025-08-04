#include<stdio.h>

int main(){
    double sum =0.0;
    long long fact;
    for (int i = 0; i <= 9; i++)
    {
       fact=1;
       for (int  j = 1; j <= i; j++)
       {
           fact*=j;
       }
       sum+=(double)i/(double)fact;
    }
    printf("sum of series =%.61f\n",sum);
    
    return 0;
}