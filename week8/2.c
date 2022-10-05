#include<stdio.h>
#include<string.h>
void stringReverse(char *str)
{
    char *p1, *p2;

    if (!str || !*str)
    {
        printf("No string passed into reverse function.");
    }
    for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
    {
        *p1 ^= *p2;
        *p2 ^= *p1;
        *p1 ^= *p2;
    }
}
int main ()
{
    char x[100];
    printf("type some things :");
    scanf("%s",&x);
    stringReverse(x);
    printf("reverse :%s",x);
    
}