#include<stdio.h>
int main()
{
    float a,b,c,t,cr,tr,q,r;
    scanf("%f %f %f",&a,&b,&c);
    t=.5*a*c;
    printf("TRIANGULO: %.3f\n",t);
    cr=3.14159*c*c;
    printf("CIRCULO: %.3f\n",cr);
    tr=.5*c*(a+b);
    printf("TRAPEZIO: %.3f\n",tr);
    q=b*b;
    printf("QUADRADO: %.3f\n",q);
    r=a*b;
    printf("RETANGULO: %.3f\n",r);


}

