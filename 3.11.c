#include <stdio.h>
int fct(int n){
int i=1;

    while(n!=1)
      {
      if(n%2==0)
        {
        n=n/2;
        }
      else {
        n=3*n+1;

      }
      i++;


      }

  return i;
}
int main(){
  int n,i=1;
  int lungAct,lungMAx=0;
  int NrSp=1;
  printf("Valoarea maxima sub care se va cauta:\n");
  scanf("%d",&n);
  /*fct(n) functia practic imi da efectiv lantul de numere care
  ies din nr citit de la tastarura si lungimea lantului */

for(int ii=1;ii<=n;ii++) {
  lungAct=fct(ii);
  if(lungAct>lungMAx) {
    lungMAx=lungAct;
    NrSp=ii;
  }

}
  printf("Numarul cu cel mai mare lant:%d\n",NrSp);
  printf("Lungimea lantului in cauza: %d\n",lungMAx);
}
