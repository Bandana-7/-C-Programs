#include<stdio.h>

int main()
{
int a,b,c,d;
float avg;
printf("Enter 4 integers");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
scanf("%d",&d);
avg=(a+b+c+d)/4;
printf("average=%f",avg);
printf("The deviation of number 1 from average is %f\n",(a-avg));
printf("The deviation of number 2 from average is %f\n",(b-avg));
printf("The deviation of number 3 from average is %f\n",(c-avg));
printf("The deviation of number 4 from average is %f\n",(d-avg));
return (0);
}
