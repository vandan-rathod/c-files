#include<stdio.h>

int main(){
    char ans,name[20];
    int days,code,discount,net,rate;
    do
    {
        printf("Enter Name: ");
        gets(name);
        printf("Enter the number of days of stay=");
        scanf("%d",&days);
        printf("Enter code=");
        scanf("%d",&code);
        switch (code)
        {
        case 1:
            printf("Name %s",name);;
            rate=3000;
            discount =rate*0.5;
            net=rate-discount;
            printf("the bill will be of %d",net);
            break;
        case 2:
            printf("Name %s",name);;
            rate=3000;
            discount =rate*0.25;
            net=rate-discount;
            printf("the bill will be of %d",net);
            break;
        case 3:
            printf("Name %s",name);
            printf("No. of days of stay: %d",days);
            rate=3000;
            discount =rate*0;
            net=rate-discount;
            printf("the bill will be of %d",net);
            break;
        default:
            break;
        }
        do
        {
            printf("\nIs there another customer?\n");
            scanf(" %c",&ans);
            if (ans!='y' && ans!='Y' && ans!='n' && ans!='N')
            {
                printf("Please enter a valid input");
            }
            
        } while (ans!='y' && ans!='Y' && ans!='n' && ans!='N');
        
    } while (ans=='y'||ans=='Y');
    
    return 0;
}