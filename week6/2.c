#include<stdio.h>
int main() {
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    int xy = x+y,xz = x+z,yz = y+z;
    if(xy >= yz && xy >= xz){
        printf("%d + %d is the most valuable",x,y);
    }
    else if(xz >= xy && xz >= yz){
        printf("%d + %d is the most valuable",x,z);
    }
    else{
        printf("%d + %d is the most valuable",y,z);
    }
    return 0;
}