#include<stdio.h>

int main(){
    int a[5],t;
    int *p1,*p2;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter a number=");
        scanf("%d",&a[i]);
    }
    printf("Unchanged array:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",a[i]);
    }
    
    p1=&a[0];
    p2=&a[4];
    
    t=*p1;
    *p1=*p2;
    *p2=t;
    printf("changed array:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",a[i]);
    }
    
    return 0;
}