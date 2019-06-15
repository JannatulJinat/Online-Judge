#include<stdio.h>

int main()
{
    float i;
    scanf("%f",&i);
    if(i>=0.00 && i<=25.00)
    {
        printf("Intervalo [0,25]\n");
    }
    else if(i>25.00 && i<=50.00)
    {
        printf("Intervalo (25,50]\n");
    }
    else if(i>50.00 && i<=75.00)
    {
        printf("Intervalo (50,75]\n");
    }
    else if(i>75.00 && i<=100.00)
    {
        printf("Intervalo (75,100]\n");
    }
    else
    {
        printf("Fora de intervalo\n");
    }
    return 0;
}

