#include<stdio.h>
int main()
{
    int t,i,n=0,m=0;
    scanf("%d",&t);
    char c[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&c[i]);
    }
    for(i=0;i<t;i++)
    {

        if(c[i]>=10 && c[i]<=20)
            n++;
            else
                m++;
    }
    printf("%d in\n",n);
printf("%d out\n",m);
    return 0;

}

