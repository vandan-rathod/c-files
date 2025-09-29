#include<stdio.h>
#include<string.h>
int main(){
    char a[50],b[25];
    printf("Enter a string: ");
    fgets(a,sizeof(a),stdin);
    printf("Enter another string: ");
    fgets(b,sizeof(b),stdin);
    a[strcspn(a,"\n")]='\0';
    b[strcspn(b,"\n")]='\0';
    strcat(a,b);
    printf("%s",a);
    return 0;
}