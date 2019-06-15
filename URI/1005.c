#include<stdio.h>
int main()
{
    float A,B,avrg;
    scanf("%f%f",&A,&B);
    avrg=((A*3.5)+(B*7.5))/(3.5+7.5);
    printf("MEDIA = %.5f\n",avrg);
    return 0;
}
