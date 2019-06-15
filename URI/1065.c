#include<stdio.h>
int main()
{
    char s[10];
    int i,n=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&s[i]);
        if(s[i]%2==0)
            n=n+1;
    }
    printf("%d valores pares\n",n);
    return 0;
}

