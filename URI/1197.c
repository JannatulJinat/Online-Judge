#include<stdio.h>
int main()
{
    int a,b;
    int ans;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        ans=a*2*b;
        printf("%d\n",ans);
    }
    return 0;
}

