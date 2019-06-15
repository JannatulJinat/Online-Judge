#include<stdio.h>
int main()
{
    float a,b,c,d,avrg,e;
    scanf("%f %f %f %f",&a,&b,&c,&d);
    avrg=(a*2+3*b+4*c+d)/10;

    printf("Media: %.1f\n",avrg);
    if(avrg >=7)
        printf("Aluno aprovado.\n");
    else if(avrg<5)
        printf("Aluno reprovado.\n");

    else if(avrg>=5 && avrg<=6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%f",&e);
        printf("Nota do exame: %.1f\n",e);
        float ans=(avrg+e)/2;
        if(ans>=5)
            printf ("Aluno aprovado.\n");
        else if(ans<=4.9)
            printf ("Aluno reprovado.\n");
        printf("Media final: %.1f\n",ans);
    }
        return 0;

    }

