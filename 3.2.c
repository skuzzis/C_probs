#include <stdio.h>
int main()
    {
  int x,y=3;
  scanf("%d",&x);
  if(x<0)
    {
    y=-x+3;
    }
    else if(x>4)
      {
      y=3*x-9;
      }
      printf("%d",y);
    }
