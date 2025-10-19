#include<stdio.h>

int main(){
    struct candidate
    {
        int regno;
        char name[20];
        char surname[20];
        int m1;
        int m2;
        int m3;
        int total;
        float percentage;
    };
    struct candidate c;
    printf("Enter registration no.: ");
    scanf("%d",&c.regno);
    printf("Enter name: ");
    scanf("%s",c.name);
    printf("Enter surname: ");
    scanf("%s",c.surname);
    printf("ENter marks in maths: ");
    scanf("%d",&c.m1);
    printf("Enter marks in english: ");
    scanf("%d",&c.m2);
    printf("Enter marks in reasoning: ");
    scanf("%d",&c.m3);
    c.total=c.m1+c.m2+c.m3;
    c.percentage=(float)c.total*100/75;
    printf("\n");
    printf("Registration no.: %d\n",c.regno);
    printf("Name: %s %s\n",c.name,c.surname);
    printf("Marks in maths: %d\n",c.m1);
    printf("Marks in english: %d\n",c.m2);
    printf("Marks in reasoning: %d\n",c.m3);
    printf("Marks in total: %d\n",c.total);
    printf("percentage: %.2f\%",c.percentage);
    return 0;
}