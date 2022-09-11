#include <stdio.h>
#include <string.h>
int main()
{
    char x[100];
    printf("input :");
    scanf("%s",&x);
    int count = strlen(x); 
    for (int i = count; i > 0; i--)
    {
        for ( int j = 0; j < i; j++)
        {
            printf("%c",x[j]);
        }
        printf("\n");
    }  
}