#include<stdio.h>

int main(){
    int same=0;
    char a[50],b[50];
    printf("Enter first string: ");
    fgets(a,sizeof(a),stdin);
    printf("Enter second string: ");
    fgets(b,sizeof(b),stdin);
    for (int i = 0; i < 50; i++)
    {
        if (a[i]==b[i])
        {
            same=1;
        }    
    }
    if (same)
    {
        printf("strings are same");
    }
    else
    {
        printf("strings are not same");
    }
    
    return 0;
}