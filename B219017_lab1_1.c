#include<stdio.h>

int main()
{
int a,b;
printf("Enter an integer");
scanf("%d",&a);

while(a/10!=0)
{
 b=a%10;
 printf("%d",b);
 a=a/10;
}
printf("%d",a);
return(0);
}

