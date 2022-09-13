#include<stdio.h>
int main() {
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if(x >= y && x >= z){
        if(y > z){
            printf("%d + %d is the most valuable",x,y);
        }
        else if(y == z){
            printf("%d + %d is the most valuable",x,y);
        }
        else{
            printf("%d + %d is the most valuable",x,z);
        }
    }
    else if(y >= x && y >= z){
        if(x > z){
            printf("%d + %d is the most valuable",x,y);
        }
        else if(x == z){
            printf("%d + %d is the most valuable",x,y);
        }
        else{
            printf("%d + %d is the most valuable",y,z);
        }
    }
    else if(z >= x && z>= y){
        if(x > y){
            printf("%d + %d is the most valuable",x,z);
        }
        else if(x == z){
            printf("%d + %d is the most valuable",z,y);
        }
        else{
            printf("%d + %d is the most valuable",y,z);
        }
    }
}