#include<stdio.h>
int main()
{
    float a,b,c;
    int n,i;
    float ans;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%f%f%f",&a,&b,&c);
        ans=(a*2+b*3+c*5)/10;
        printf("%.1f\n",ans);
    }
    return 0;
}

