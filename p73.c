#include<stdio.h>
#include<string.h>
int main(){
    char a[15];
    printf("enter a string: ");
    fgets(a,sizeof(a),stdin);
    printf("%s",a);
    return 0;
}