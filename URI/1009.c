#include<stdio.h>
int main()
{
    char name;
    double salary,price,total;

    scanf("%s %lf %lf",&name,&salary,&price);

    total=((price*15)/100)+salary;
    printf("TOTAL = R$ %.2lf\n",total);
}

