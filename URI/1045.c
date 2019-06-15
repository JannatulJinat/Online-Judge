#include <stdio.h>
int main()
{
    double a,b,c,p,r,q;
    scanf("%lf%lf%lf",&a,&b,&c);

    if (a<b)
{   p=a;
    a=b;
    b=p;
}

    if (b<c)
{   r = b;
    b = c;
    c = r;
}
if (a<b)
{   q=a;
    a=b;
    b=q;
}

if (a >= b + c)
        printf("NAO FORMA TRIANGULO\n");
else if (a * a == b * b + c * c)
        printf("TRIANGULO RETANGULO\n");
else if (a * a > b * b + c * c)
    printf("TRIANGULO OBTUSANGULO\n");
else if (a * a < b * b + c * c)
    printf("TRIANGULO ACUTANGULO\n");
if (a == b && b == c)
    printf("TRIANGULO EQUILATERO\n");
else if (a == b || b == c ||a==c)
    printf("TRIANGULO ISOSCELES\n");
return 0;

}
