#include<stdio.h>

int main(){
    char a[500];
    int alpha=0,upper=0,lower=0,digit=0,space=0,enter=0;
    printf("Enter lines which must consist of 500 characters of max");
    fgets(a,500,stdin);
    for (int i = 0; i < 500; i++)
    {
        if (a[i]>='A' && a[i]<='Z')
        {
            alpha++;
            upper++;
        }
        else if (a[i]>='a' && a[i]<='z')
        {
            alpha++;
            lower++;
        }
        else if (a[i]>='0' && a[i]<='9')
        {
            digit++;
        }
        else if (a[i]>=' ')
        {
            space++;
        }
        else if (a[i]=='\n')
        {
            enter++;
        }
    }
    printf("number of letters: %d\n",alpha);
    printf("number of upper letters: %d\n",upper);
    printf("number of lower letters: %d\n",lower);
    printf("number of digits: %d\n",digit);
    printf("number of spaces: %d\n",space);
    printf("number of newlines: %d\n",enter);

    return 0;
}