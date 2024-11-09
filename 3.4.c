#include <stdio.h>
int main()
    {
    char c;
    scanf("%c",&c);
    if(c>64 && c<91){
    for (int i=c;i<=90;i++)
      printf("%c",i);
    }
    else if(c>96 && c<123){
        for (int i=c;i<=122;i++)
            printf("%c",i);
    }
}