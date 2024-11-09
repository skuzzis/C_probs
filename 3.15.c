#include <stdio.h>
int main()
    {
  char a;
  scanf("%c",&a);
  if(a<97)
    {
    printf("%c",a+32);
    }
    else{
      printf("%c",a-32);
    }
    }