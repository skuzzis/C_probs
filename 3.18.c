#include <stdio.h>
#define m 100
int sum=0;
int k=0;
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
int sum_prime(int i,int n) {

    sum +=i;
    if( prime(sum) == 1 && sum < n) {
        k++;
        return sum;
    }
    return 0;
}
int main() {
    int n;
    int LA=0,LM=0;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        if (prime(i)==1) {
            LA=sum_prime(i,n);
            printf("%d ",i);
            if(LM<LA && LA != 0) {
                LM=LA;
            }
        }
    }
    printf("Numarul Maxim:%d\n",LM);
    printf("Lungimea Maxima:%d\n",k);

    return 0;
}