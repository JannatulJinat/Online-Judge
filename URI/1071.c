#include<stdio.h>
int main()
{
    int x,y,i,o=0;
    scanf("%d%d",&x,&y);
    if(x>y)
    {
        for(i=y+1; i<x; i++)
         {
             if(i%2!=0)
            {
                o=i+o;
            }
         }
         printf("%d\n",o);

    }
   else  if(x<y)
    {
        for(i=x+1; i<y; i++)
           {

            if(i%2!=0)
            {
                o=i+o;
            }
       } printf("%d\n",o);

    }
    else
    printf("%d\n",o);

    return 0;
}

