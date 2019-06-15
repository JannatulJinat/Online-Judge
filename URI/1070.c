#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);

    if(n%2==0)
    {
        n++;
        printf("%d\n",n);

        for(i=1; i<=6-1; i++)
        {
            n=n+2;
            printf("%d\n",n);
        }
    }
    else
    {
        for(i=1; i<=6; i++)
        {
            n=n+2;
            printf("%d\n",n);
        }
    }
    return 0;
}

