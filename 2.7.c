#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    if(a & (1<<31))
    {
        printf("Numar negativ\n");
    }
    else{
        printf("Numar pozitiv");
    }
    return 0;
}