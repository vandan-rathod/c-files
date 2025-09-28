#include<stdio.h>

int main(){
    char a;
    char b[]={'a','e','i','o','u','A','E','I','O','U'};
    int isvowel=0;
    printf("Enter a character: ");
    scanf("%c",&a);
    for (int i = 0; i < 10; i++)
    {
        if (a==b[i])
        {
            isvowel=1;
            break;
        }
    }
    if (isvowel)
    {
        printf("The entered character is a vowel");
    }
    else
    {
        printf("The entered character is a consonent");
    }
    
    return 0;
}