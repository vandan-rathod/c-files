#include<stdio.h>

int main(){
    struct student
    {
        int seatno;
        char name[20];
        char surname[20];
    };
    struct student x;
    printf("Enter roll no.:");
    scanf("%d",&x.seatno);
    printf("Enter your name: ");
    fgets(x.name,sizeof(x.name),stdin);
    printf("Enter your surname: ");
    fgets(x.surname,sizeof(x.surname),stdin);

    printf("student details:\n");
    printf("name:%s\n",x.name);
    printf("surname:%s\n",x.surname);
    printf("seat no. :%d\n",x.seatno);
    return 0;
}