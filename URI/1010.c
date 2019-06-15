#include<stdio.h>
int main()
{
    int i,a,b;
    float c,total;
    for (i=1;i<=2;i++)
    {
        scanf ("%d %d %f",&a,&b,&c);

            total=total+(b*c);
    }
    printf("VALOR A PAGAR: R$ %.2f\n",total);
}

