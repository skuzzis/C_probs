#include <stdio.h>
int main() {
    int n,k=0,s=0,p,r;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        s=s+i*i;
    }
    for(int i=1;i<=n;i++) {
        k +=i;
    }
    p=k*k;
    r=p-s;
    printf("%d",r);
}