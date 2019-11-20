#include<stdio.h>

int main()
{
float x,y,s,p,total;
printf("Enter 2 values");
scanf("%f %f",&x,&y);
 p=x*y;
 s=x+y;
 total=s*s+p*(s-x)*(p+y);
 printf("Total=%f",total);

return(0);
}
