#include<stdio.h>

int main(){
    int i,j,s;
    for ( i = 1; i <=5 ; i++)
    {
        for ( s = 1; s <=5-i ; s++)
        {
            printf(" ");
        }
        for ( j =5; j >=5-i+1 ; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}