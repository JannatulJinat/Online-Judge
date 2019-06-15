#include<stdio.h>
int main()
{
    int i,m=0;
    float ans=0;
    float s[11];
    for(i=0;i<6;i++)
    {
        scanf("%f",&s[i]);
    }
    for(i=0;i<6;i++)
    {
        if(s[i]>0)
        {
        m++;
        ans=ans+s[i];
    }}
    printf("%d valores positivos\n",m);
       printf("%.1f\n",ans/m);


    return 0;

}

