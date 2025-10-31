#include<stdio.h>

void smaller(int *a,int *b){
    if (*a>*b)
    {
        printf("the younger person has age %d",*b);
    }
    else if (*a<*b)
    {
        printf("the younger person has age %d",*a);
    }
    else
    {
        printf("both havesame age");
    }
    
}
int main(){
    int a,b;
    printf("Enter age of 1st person: ");
    scanf("%d",&a);
    printf("Enter age of 2nd person: ");
    scanf("%d",&b);
    smaller(&a,&b);
    return 0;
}