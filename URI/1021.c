#include<stdio.h>
int main()
{

    int c,d,e,f,g,h,j,k,m,n,o,p;
    float a,i;
    scanf("%f",&a);
    c=a/100;
    d=(a-c*100)/50;
    e=(a-c*100-d*50)/20;
    f=(a-c*100-d*50-e*20)/10;
    g=(a-c*100-d*50-e*20-f*10)/5;
    h=(a-c*100-d*50-e*20-f*10-g*5)/2;
    i=(a-((c*100)+(d*50)+(e*20)+(f*10)+(g*5)+(h*2)))+0.001;
    j=i/1.00;

    k=(i-j)/0.50;
    m=(i-(j+k*0.50))/0.25;
    n=(i-(j+(m*0.25)+(k*0.50)))/0.10;
    o=(i-(j+(m*0.25)+(k*0.50)+(n*0.10)))/0.05;
    p=(i-(j+(m*0.25)+(k*0.50)+(n*0.10)+(o*0.05)))/(0.01);
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",c);
    printf("%d nota(s) de R$ 50.00\n",d);
    printf("%d nota(s) de R$ 20.00\n",e);
    printf("%d nota(s) de R$ 10.00\n",f);
    printf("%d nota(s) de R$ 5.00\n",g);
    printf("%d nota(s) de R$ 2.00\n",h);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",j);
    printf("%d moeda(s) de R$ 0.50\n",k);
    printf("%d moeda(s) de R$ 0.25\n",m);
    printf("%d moeda(s) de R$ 0.10\n",n);
    printf("%d moeda(s) de R$ 0.05\n",o);
    printf("%d moeda(s) de R$ 0.01\n",p);

    return 0;
}

