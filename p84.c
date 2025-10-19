#include<stdio.h>

struct employee
    {
        int code;
        char name[20];
        char surname[20];
        int salary;
    };

void details(struct employee *e)
    {
        printf("Enter the details of the employee:\n");
        printf("Enter code:");
        scanf("%d",&e->code);
        printf("Enter name: ");
        scanf("%s",e->name);
        printf("Enter surname: ");
        scanf("%s",e->surname);
        printf("Enter salary: ");
        scanf("%d",&e->salary);
    }

void swap(struct employee *x, struct employee *y,struct employee *z)
    {
        *z=*x;
        *x=*y;
        *y=*z;
    }

void display(struct employee e){
    printf("\nEmployee details:\n");
    printf("code: %d\n",e.code);
    printf("full name: %s %s\n",e.name,e.surname);
    printf("salary: %d\n",e.salary);

}
int main(){
    
    struct employee x,y,t;
    details(&x);
    details(&y);

    printf("\nbefore swap\n\n");

    display(x);
    display(y);

    // swap

    swap(&x,&y,&t);

    printf("\nafter swap\n\n");

    display(x);
    display(y);
    return 0;
}