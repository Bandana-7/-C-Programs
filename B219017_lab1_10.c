#include<stdio.h>

int main()
{
int a;
printf("Enter any 5 digit number in the range 0-32767:");
scanf(" %d ",&a);
int b=a%10;
a=a/10;
int c=a%10;
a=a/10;
int d=a%10;
a=a/10;
int e=a%10;
int f=a%10;
printf("%d   %d   %d   %d   %d\n",f,e,d,c,b);
printf("%d   %d   %d   %d\n",e,d,c,b);
printf("%d   %d   %d\n",d,c,b);
printf("%d   %d\n",c,b);
printf("%d\n",b);
return(0);
}
