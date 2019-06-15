#include<stdio.h>
int main()
{
    long long a,b,ans;

    while(scanf("%lld%lld",&a,&b)!=EOF)
    {
        if(b>=a)
        {
            ans=(b-a);
            printf("%lld\n",ans);
        }
        else
        {
            ans=(a-b);
            printf("%lld\n",ans);
        }

    }
    return 0;
}
