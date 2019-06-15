#include <stdio.h>
int main()
{
    int a,b,c,p,r,s,t,y;
    scanf("%d%d%d",&s,&t,&y);
a=s;
b=t;
c=y;
    if (a>b)
{   p=a;
    a=b;
    b=p;
}

    if (b>c)
{   r = b;
    b = c;
    c = r;
}
if (a>b)
{   p=a;
    a=b;
    b=p;
}
printf("%d\n%d\n%d\n",a,b,c);
printf("\n");
printf("%d\n%d\n%d\n",s,t,y);

return 0;
}

