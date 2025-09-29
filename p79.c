#include<stdio.h>
#include<ctype.h>
int main(){
    char a[25];
    int i=0;
    printf("Enter a string: ");
    fgets(a,sizeof(a),stdin);
    while (a[i]!='\0')
    {
        a[i]=tolower(a[i]);
        i++;
    }
    
    printf("%s",a);
    return 0;
}