#include<stdio.h>
#include<string.h>
int main(){
    char a[25];
    int len;
    printf("Enter a string: ");
    fgets(a,sizeof(a),stdin);
    len=strlen(a);
    if (a[len-1]=='\n')
    {
        a[len-1]='\0';
    }
    
    for (int i = len-1 ; i >=0 ; i--)
    {
        printf("%c",a[i]);
    }
    
    return 0;
}