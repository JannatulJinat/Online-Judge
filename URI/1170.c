#include <stdio.h>

int main()
{
    int n, dias,i;
    float x;

    scanf("%d",&n);
    for(i=0;i<n;i++){
            scanf("%f",&x);
            dias=0;
            while(x > 1){
                   x= x /2;
                    dias++;
            }
            printf("%d dias\n", dias);
    }

    return 0;
}
