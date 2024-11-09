#include <stdio.h>
int fct(int n) {
    int k=0,i=10;
    while(i!=0){
        if(n%i == 0) {
            k++;
        }
        i--;
    }
        if(k==10) {
            return n;
        }
        else {
            return 0;
        }

}
int main(){
    int n=1;
        while (fct(n)!=0){
        n++;
        }
}
