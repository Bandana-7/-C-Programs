#include<stdio.h>
int main()
{
int l,w;
int a,p;
printf("Enter the length of rectangle");
scanf("%d",&l);
printf("Enter the width of rectangle");
scanf("%d",&w);
a=l*w;
p=2*(l+w);
printf("The area of rectangle is %d",a);
printf("The perimeter of rectangle is %d",p);
return(0);
}
