#include<stdio.h>
int main()
{
    int A,B,C,D,SUM1,SUM2;
    scanf("%d %d %d %d",&A,&B,&C,&D);

    if(B>C && D>A)
    {
        SUM1=C+D;
        SUM2=A+B;
        if(SUM1>SUM2)
        {
            if(C>0 && D>0)
            {
                if(A%2==0)
                    printf("Valores aceitos\n");
                else
                    printf("Valores nao aceitos\n");
            }
            else
                printf("Valores nao aceitos\n");
        }
        else
                printf("Valores nao aceitos\n");
    }
     else
                printf("Valores nao aceitos\n");
return 0;
}
