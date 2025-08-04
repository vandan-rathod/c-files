#include<stdio.h>

int main(){
    char name[20],ans;
    int rate,seat,code,net;
    do
    {
        printf("Enter code=");
        scanf("%d",&code);
        printf("Number of passangers=");
        scanf("%d",&seat);
        switch (code)
        {
        case 1:
            rate =200;
            net =rate*seat;
            printf("ahemadabad\t%d",net);
            break;
        case 2:
            rate =300;
            net=rate*seat;
            printf("Vadodara\t%d",net);
            break;
        case 3:
            rate=400;
            net=rate*seat;
            printf("Rajkot\t%d",net);
            break;
        case 4:
            rate=500;
            net=rate*seat;
            printf("Surat\t%d",net);
        default:
            break;
        }

        do
        {
            printf("\nDo you wanna continue?\n");
            scanf(" %c",&ans);
            if (ans!='Y' && ans!='y' && ans!='N' && ans!='n')
            {
                printf("Please enter a valid input");
            }
            
        } while (ans!='Y' && ans!='y' && ans!='N' && ans!='n');
        

    } while (ans=='y'||ans=='Y');
    
    return 0;
}