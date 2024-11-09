#include <stdio.h>
int k=0;
int prime(int n) {
    int d=0;
    for(int i=1;i<=n;i++) {
        if(n%i==0) {
            d++;
            k++;
        }
    }
    if(d==2) {
        return 1;
    }
    else {return 0;}
}
int main() {
    int n;
    scanf("%d", &n);
    int v[255];
    for (int i = 1; i <= n/2; i++) {
        if (prime(i)==1) {

            printf("%d ",i);
        }
    }
}