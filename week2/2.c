#include <stdio.h>

int main()
{
    int x[100];
    printf("enter two number :");
    scanf("%d %d",&x[0],&x[1]);
    printf("%d+%d=%d \n",x[0],x[1],x[0]+x[1]);
    printf("%d-%d=%d \n",x[0],x[1],x[0]-x[1]);
    printf("%d*%d=%d \n",x[0],x[1],x[0]*x[1]);
    printf("%d/%d=%.2f",x[0],x[1],(float)x[0]/x[1]);
}