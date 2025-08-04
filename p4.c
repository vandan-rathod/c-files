#include<stdio.h>
#include<math.h> 
int main(){
    int x,y;
    printf("Enter X=");
    scanf("%d",&x);
    printf("Enter Y=");
    scanf("%d",&y);
    printf("total= %d\n",x+y);
    printf("substraction=%d\n",x-y);
    printf("multiplication=%d\n",x*y);
    printf("division=%d\n",x/y);
    printf("exponentiation=%.0lf\n",pow(x,y));
    return 0;
}