#include<stdio.h>
int main()
{
    char s[10];
    int i,n=0,m=0,p=0,q=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&s[i]);
        if(s[i]%2==0)
            n=n+1;
        if(s[i]%2!=0)
            m=m+1;
        if(s[i]<0)
            p=p+1;
        if(s[i]>0)
            q=q+1;

    }
    printf("%d valor(es) par(es)\n",n);
    printf("%d valor(es) impar(es)\n",m);
    printf("%d valor(es) positivo(s)\n",q);
    printf("%d valor(es) negativo(s)\n",p);

    return 0;
}


