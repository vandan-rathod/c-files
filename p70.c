#include<stdio.h>

int main(){
    char a;
    printf("Enter a character=");
    scanf("%c",&a);
    if (a>64)
    {
        if (a<91)
        {
            printf("The entered character is a Capital letter");
        }
        else if (a>96)
        {
            if (a<123)
            {
                printf("The entered character is a not a capital letter");
            }
            
        }
        
    }
    else
    {
        printf("The entered character is a not a letter");
    }
    
    
    return 0;
}