#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the three numbers");
scanf("%d %d %d",&a,&b,&c);
if(a>b)
{
 if(a>c)
 {
  printf("The greatest value is %d",a);
  }
  else
  {printf("The greatest value is %d",c);
  }
}
else
{
  if(b>c)
  {
  printf("The greatest value is %d",b);
  }
  else
  {
  printf("The greatest value is %d",c);
  }
}
return(0);
}
