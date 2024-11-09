#include <stdio.h>

char alpha[][3]={{'M','D','C'},{'C','L','X'},{'X','V','I'}};

void display_digit(int c,char* alphabet)
{
    if(c==0)
        return ;
    if(c>=1 && c<=3)
    {   for(int i=1;i<=c;i++){
        printf("%c",alphabet[2]);}
    }
    else if(c>=5 && c<=8)
    {
        printf("%c",alphabet[1]);
        for(int i=1;i<=c-5;i++)
        {
            printf("%c",alphabet[2]);
        }
    }
    else if(c==4)
    {
        printf("%c%c",alphabet[2],alphabet[1]);

    }
    else if(c==9)
    {
        printf("%c%c",alphabet[2],alphabet[0]);
    }
}
void display(int n)
{
    while(n>1000)
    {
        n-=1000;
        printf("M");
    }
    int a=n/100;
    int b=(n-a*100)/10;
    int c=(n-b*10-a*100);
    display_digit(a,alpha[0]);
    display_digit(b,alpha[1]);
    display_digit(c,alpha[2]);
}
int main()
{
    int n;
    scanf("%d",&n);

    if(n>=4000)
    {
        display(n/1000);
        printf("'");
        display(n%1000);
    }
    else{
        display(n);
    }
    return 0;
}