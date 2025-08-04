#include<stdio.h>

int main(){
    int i,seat_no,m1,m2,m3,m4,m5,m6,total;
    char name[20];
    float avg;
    i=0;
    while (i<=2)
    {
        printf("Enter name of the student:");
        gets(name);
        printf("Enter seat no.:");
        scanf("%d",&seat_no);
        printf("Enter marks in physics=");
        scanf("%d",&m1);
        printf("Enter marks in chemistry=");
        scanf("%d",&m2);
        printf("Enter marks in maths=");
        scanf("%d",&m3);
        printf("Enter marks in engilsh=");
        scanf("%d",&m4);
        printf("Enter marks in computer=");
        scanf("%d",&m5);
        printf("Enter marks in biology=");
        scanf("%d",&m6);
        total=m1+m2+m3+m4+m5+m6;
        avg=(float)total/6;
        printf("student name :%s\n",name);
        printf("seat no :%d\n",seat_no);
        printf("physics: %d\n",m1);
        printf("chemistry: %d\n",m2);
        printf("maths: %d\n",m3);
        printf("english: %d\n",m4);
        printf("computer: %d\n",m5);
        printf("biology: %d\n",m6);
        printf("total: %d\n",total);
        printf("average: %.2f\n",avg);
        while(getchar()!='\n');
        i++;
    }
    
    return 0;
}