#include<stdio.h>
int sum(int *n){
    int total=0;
    for (int i = 0; i <= *n ; i++)
    {
        total += i;
    }
    return total;
    
}
int main(){
    int n;
    printf("Enter N: ");
    scanf("%d",&n);
    int total=sum(&n);
    printf("%d",total);
    return 0;
}