#include<stdio.h>

int main(){
    int a[5];
    //input loop
    for (int i = 0; i < 5; i++)
    {
        printf("Enter a number=");
        scanf("%d",&a[i]);
    }
    //output loop
    for (int i = 0; i < 5; i++)
    {
        printf("Value = %d\n",*(a+i));
    }
    return 0;
}