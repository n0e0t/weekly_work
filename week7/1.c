#include<stdio.h>
int main(){
  int num;
  printf("Enter number :");
  scanf("%d",&num);
  num=num-1;
  for(int y=0;y>=-num;y--)
  {
    for(int x=-num;x<=num;x++)
    {
      if(x>=y && x<=-y) printf("*");
      else printf(" ");
    }
    printf("\n");
  }
}