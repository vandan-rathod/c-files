#include<stdio.h>
#include<string.h>

int main(){
    char str1[20],str2[20];
    int same=1;
    printf("Enter a string");
    fgets(str1,sizeof(str1),stdin);
    int len=strlen(str1);
    
    if(str1[len-1] == '\n') 
    {
        str1[len-1] = '\0';
        len--; // update length
    }

    strcpy(str2,str1);

    for (int i = 0; i < len/2; i++)
    {
        int temp=str1[i];
        str1[i]=str1[len-1-i];
        str1[len-1-i]=temp;
    }
    for (int i = 0; i < len; i++)
    {
        if (str1[i]!=str2[i])
        {
            same=0;
            break;
        }
    }
    if (same)
    {
        printf("the string is palindrome");
    }
    else
    {
        printf("the string is not palindrome");
    }
    
    return 0;
}