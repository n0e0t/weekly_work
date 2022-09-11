#include <stdio.h>
#include <string.h>
int main()
{
    char x[100];
    printf("input :");
    scanf("%s",&x);
    int count = strlen(x); 
    int i = count ;
    int j = 0 ;
    while (i>0)
    {
        while (j<i)
        {
           printf("%c",x[j]);
           j++;
        }
        printf("\n");
        i--;
        j=0;
    }
}