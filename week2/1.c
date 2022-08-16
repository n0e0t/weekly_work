#include <stdio.h>
int main()
{
    int x,y;
    printf("enter first number :");
    scanf("%d",&x);
    printf("enter second number :");
    scanf("%d",&y);
    printf("%d+%d=%d \n",x,y,x+y);
    printf("%d-%d=%d \n",x,y,x-y);
    printf("%d*%d=%d \n",x,y,x*y);
    printf("%d/%d=%.2f ",x,y,(float)x/y);
}