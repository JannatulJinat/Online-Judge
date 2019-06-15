#include<stdio.h>
int main()
{
    int i;
    long int n;
    scanf("%d",&n);
    long int s[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    for(i=0;i<n;i++)
    {
        if(s[i]==0)
            printf("NULL\n");
        else if(s[i]>0)
        {
            if(s[i]%2==0)

            printf("EVEN POSITIVE\n");
            else
                printf("ODD POSITIVE\n");
        }
        else if(s[i]<0)
        {
            if(s[i]%2==0)

            printf("EVEN NEGATIVE\n");
            else
                printf("ODD NEGATIVE\n");
        }

    }
    return 0;

}

