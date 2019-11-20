#include<stdio.h>

int main()
{
int a,b,c;
printf("Enter two numbers");
scanf("%d %d",&a,&b);
printf("The value of a  %d\n",a);
printf("The value of b  %d\n",b);
c=a;
a=b;
b=c;
printf("The value of a after swaping %d \n",a);
printf("The value of b after swaping %d \n",b);
return(0);
}
