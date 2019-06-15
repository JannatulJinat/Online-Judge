#include <stdio.h>
#include<math.h>

int main() {

   double a,b,c,d,f,g,h;
   scanf("%lf%lf%lf",&a,&b,&c);
   g= sqrt((b*b)-(4*a*c));
   h = (b*b)-(4*a*c);
   if(h>0 && a!=0)
   {
   d = (-b+g)/(2*a);
   f = (-b-g)/(2*a);
   printf("R1 = %.5f\n",d);
   printf("R2 = %.5f\n",f);
   }
   else
    printf("Impossivel calcular\n");
    return 0;
}
