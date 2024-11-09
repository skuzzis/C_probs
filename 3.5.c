#include <stdio.h>
int prime(int n)
    {   int d=0;
        for(int i=1;i<=n;i++) {
            if(n%i==0) {
                d++;
            }
        }
    if(d!=2) {
        return 0;
    }
    else{
return 1;}
    }
int main()
        {
    int n,y;
    scanf("%d",&n);
    y=prime(n);
    printf("%d",y);
    return y;
}
