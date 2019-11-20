#include<stdio.h>

int main()
{
const float Rad=57.295;
float a;
float d;
printf("Enter an angle in radians measure");
scanf("%f",&a);
d=a*Rad;
printf("Angle in degree measure=%f",d);
return(0);
}
