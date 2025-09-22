#include<stdio.h>

int main(){
    for (int i = 0; i < 256; i++)
    {
        printf("The ASCII code of %c=%3d\n",i,i);
    }
    
    return 0;
}