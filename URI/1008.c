#include <stdio.h>
int main()
{
    int num,hour;
    float salary,total_salary;
  while(scanf("%d %d %f",&num,&hour,&salary)==3)

    {

        total_salary=hour*salary;

        printf("NUMBER = %d\nSALARY = U$ %.2f\n",num,total_salary);

    }
}


