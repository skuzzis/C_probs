#include <stdio.h>

int main(){
    int a,b,c,d,rest;
    scanf("%d %d", &a,&b);
    c = a/b;
    d = c*b;
    rest= a-d;
    printf("%d",rest);
}