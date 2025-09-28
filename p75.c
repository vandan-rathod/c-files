#include<stdio.h>

int main(){
    char a[25];
    int i=0;
    printf("Enter a string: ");
    fgets(a,sizeof(a),stdin);
    while (a[i]!='a'&&a[i]!='A'&&a[i]!='\0')
    {
        i++;
    }
    if (a[i]=='a'||a[i]=='A')
    {
        printf("The position of 'A' or 'a' is: %d",i);
    }
    else if (a[i]=='\0')
    {
        printf("'A' or 'a' are not fount in the string");
    }
    
    return 0;
}