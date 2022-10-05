#include <stdio.h>
#include <string.h>
int main()
{
    char x[100];
    printf("type some things :");
    scanf("%s",&x);
    int len = strlen(x);
    printf("reverse :");
    for (int i = len; i >= 0 ; i--)
    {
        printf("%c",x[i]);
    }
    
}