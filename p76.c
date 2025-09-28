#include<stdio.h>
#include<string.h>
int main(){
    char a[25];
    int i=0;
    printf("Enter a string: ");
    fgets(a,sizeof(a),stdin);
    while (a[i]!='\0')
    {
        if (a[i]=='c')
        {
            a[i]='k';
        }
        else if (a[i]=='C')
        {
            a[i]='K';
        }
        i++;
        
    }
    printf("%s",a);
    
    return 0;
}