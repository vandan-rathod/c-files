#include<stdio.h>
#include<string.h>
int main(){
    int x;
    char a[25];
    printf("Enter a string: ");
    fgets(a,sizeof(a),stdin);
    x=strlen(a);
    printf("Length of string entered: %d",x);
    return 0;
}