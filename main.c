#include <stdio.h>

int main() {
    int x,y=3;
    scanf("%d", &x);
    if(x<0) {
        y= 3-x;
    }
    else if(x>4) {
        y=3*x-9;
    }
    printf("%d\n", y);
    return 0;
}
