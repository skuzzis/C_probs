#include <stdio.h>
int main() {
    for(int i=1;i<1000;i++) {
        for(int ii=1;ii<1000;ii++) {
            for (int iii=1;iii<1000;iii++) {
                if(((i*i+ii*ii==iii*iii) || (i*i+iii*iii==ii*ii) || (ii*ii+iii*iii==i*i)) && (i+ii+iii==1000)) {
                    int p=i*ii*iii;
                    printf("Acestea sunt valorile:\n%d\n %d\n %d \n",i,ii,iii);
                    printf("Acesta este produsul lor: %d\n",p);
                }

            }
        }
    }
}