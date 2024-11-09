#include <stdio.h>
int put(int a,int n)
{
  for(int i=1;i<n;i++)
    {
    a=a*a;
    }
    return a;
}

int main()
{    int a,n;
    printf("Numarul dorit ridicat la putere: ");
    scanf("%d",&a);
    printf("\nPuterea dorita: ");
    scanf("%d",&n);
    printf("\nRezultatul dorit: %d \n", put(a,n));
}
