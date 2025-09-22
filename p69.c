#include<stdio.h>

int main(){
    char a;
    printf("Enter a character=");
    scanf("%c",&a);
    if (a<58)
    {
        if (a>47)
        {
            printf("The entered character is a digit");
        }
        else
        {
            printf("The entered character is not a digit");
        }   
    } else
    {
        printf("the entered character is not a digit");
    }
    return 0;
}