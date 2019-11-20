#include<stdio.h>
int main()
{
int quantity;
float unitPrice;
printf("Enter the quantity and cost of the object");
scanf("%d  %f",&quantity,&unitPrice);
printf("\n\nThe entered quantity and cost of object is:\n");
printf("quantity= %d\ncost=Rs. %f\n",quantity,unitPrice);
return(0);
}
