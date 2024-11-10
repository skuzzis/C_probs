#include <stdio.h>

int main()
{
    int var1,var2,var3;
    printf("Introduceti 3 valori la intamplare:");
    scanf("%d %d %d", &var1, &var2, &var3);
    if(var1>=var2 && var1>=var3){
        printf("%d",var1);
    }
    else {if(var2>=var1 && var2>=var3){
        printf("%d",var2);}
    else
    {
        printf("%d",var3);

    }
    }
    return 0;
}