#include<stdio.h>

int main(){
    int marks,sno;
    char name[50];
    char subject[10];
    printf("Enter seat no. =");
    scanf("%d",&sno);
    printf("Name: ");
    scanf("%s",name);
    printf("Subject: ");
    scanf("%s",&subject);
    printf("Marks: ");
    scanf("%d",&marks);
    if (marks>=40)
    {
        printf("Result: pass");
    }
    else
    {
        printf("Result: Fail");
    }
    
    return 0;
}