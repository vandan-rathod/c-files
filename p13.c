#include<stdio.h>

int main(){
    int hour1,hour2,hour3,min1,min2,min3;
    printf("Enter time taken to reach city-2 from city-1 :");
    scanf("%d %d",&hour1,&min1);
    printf("Enter time taken to reach city-3 from city-2 :");
    scanf("%d %d",&hour2,&min2);
    hour3=hour1+hour2;
    min3=min1+min2;
    if (min3>=60)
    {
        min3=min3-60;
        hour3=hour3+1;
    }
    printf("Time taken to reach city-3 from city-1 : %d Hrs %d Mins",hour3,min3);
    
    return 0;
}