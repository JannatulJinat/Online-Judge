#include<stdio.h>
int main()
{
    int i,h,m,s;
    scanf("%d",&i);
    h=i/365;
    m=(i%365)/30;
    s=(i%365)%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",h,m,s);
    return 0;
}


