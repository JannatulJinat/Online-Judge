#include<stdio.h>
int main()
{
    int n,ans=1,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
        ans=i*i;
        printf("%d^2 = %d\n",i,ans);
        }

    }
    return 0;
}

