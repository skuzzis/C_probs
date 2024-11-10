#include <stdio.h>
int main()
{
    int a,b,*p1,*p2,var1,var2,m;
    a=5;
    b=2;
    printf("Valorile initiale celor doua numere: %d %d\n",a,b);
    p1=&a;
    p2=&b;
    var1=*p1;
    var2=*p2;
    m=var1*var2;
    printf("Produsul celor doua numere: %d",m);
    return 0;
}