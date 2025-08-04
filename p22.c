#include<stdio.h>

int main(){
    int i,r1,r2,r3,total;
    float run_rate;
    char name[20];
    i=0;
    while (i<=4)
    {
        printf("Enter name of player =");
        gets(name);
        printf("runs made in first ODI =");
        scanf("%d",&r1);
        printf("runs made in second ODI =");
        scanf("%d",&r2);
        printf("runs made in third ODI =");
        scanf("%d",&r3);        
        total=r1+r2+r3;
        run_rate = (float)total/3;
        printf("the total runs made by %s are %d and the run rate is %.2f\n\n",name,total,run_rate);
        while (getchar()!='\n');
        i++;
    }
    return 0;
}