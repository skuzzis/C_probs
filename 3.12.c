#include <stdio.h>
#include <math.h>
int pp(int n) {
    int root = (int)sqrt(n);
    return root * root == n;
}
int prime(int n) {
    int d=0;
    for(int i=1;i<=n;i++) {
        if(n%i==0) {
            d++;

        }
    }
    if(d==2) {
        return 1;
    }
    else {return 0;}
}
int golden(int n) {
    for (int i = 1; i <= n; i++) {
        if (prime(i)==1) {
            int rest=n-i;
            if((rest%2 == 0 ) && (pp(rest/2) == 1) ) {
                return 1;
            }
        }
    }
    return 0;
}
int main() {
    int n=9;
    while(1) {
    if(prime(n) == 0) {
        if(golden(n)==0) {
        printf("Golden found: %d \n",n);
            break;
        }
    }
        n+=2;
    }
    return 0;
}