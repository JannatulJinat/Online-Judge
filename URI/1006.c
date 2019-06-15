#include<stdio.h>
int main()
{
    float A,B,C,avrg;
    scanf("%f%f%f",&A,&B,&C);
    avrg=((A*2)+(B*3)+(C*5))/(2+3+5);
    printf("MEDIA = %.1f\n",avrg);
    return 0;
}
