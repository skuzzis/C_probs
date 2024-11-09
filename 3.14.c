#include <stdio.h>
int fct(int a) {
    for(int i=1;i<=a/2;i++) {
        if(i*i==a) {
            return i;
        }
    }
}
int main()
    {
  int a;
  scanf("%d",&a);
  printf("%d",fct(a));
    }