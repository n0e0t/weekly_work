#include<stdio.h>
int main()
{
    printf("Enter number :");
    int x;
    scanf("%d",&x);
    int print_control_x=1;
    x=x*2-1;
      for(int j=1;j<=x;j++)
       {
           for(int i=1;i<=x;i++)
           {
               if(i<=print_control_x || i>=x-print_control_x+1)
               {
                printf("*");
                 }
               else
               {
                 printf(" ");
               }
             }
           if(j<=x/2)
        	   print_control_x++;
           else
              print_control_x--;
            printf("\n");
     }
}
