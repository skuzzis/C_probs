#include <stdio.h>
#define n 1000
int main()
{   int s=0;
    for (int i = 1; i <= n; i++) {
        if(i%3 ==0 && i%5 == 0) {
            s=s+i;
        }
    }
    printf("%d\n",s);
}
