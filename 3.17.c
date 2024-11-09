#include <stdio.h>
int main()
{
    int n,k,m=0,p=7,v[9];
    scanf("%d",&n);
    while(p >= 0)
    {
        if(n%2 == 1)
        {v[p]=1;}
        else{
            v[p]=0;
        }
        p--;
        n/=2;
    }
    for(int i=0;i<8;i++)
    {
        printf("%d",v[i]);
    }
    return 0;
}