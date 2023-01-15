#include<stdio.h>
int main()
{
	int visits, items, discount;
	int discount1=0, discount2=0;
	char payment;
	printf("Enter your previous visits, and items in your cart. \n");
	scanf("%d %d", &visits, &items);
	printf("Press 1 if your payment is through store sponsored method? Otherwsie press 0 \n");
	scanf ("%c", &payment);
	
	if (visits>10 && visits<50)
	{
	  discount1=10;
	  printf("Your discount is %d Percent \n", discount1);
    }
	else if (visits>50)
	{	
	  discount1=30;
	  printf("Your discount is %d percent \n", discount1);
	}
	
	if (items>20 && items<50)
	{
	  discount2=15;
	  printf("Your discount is %d percent \n", discount2);
    }
	else if(items>50)
	{
	  discount2=45;
	  printf("Your discount is %d percent \n", discount2);
	}
	
	if (visits>50 && items>50)
	{
	  discount=discount1+discount2+25;
	  printf("Your discount is %d percent \n", discount);

	}
	if (payment=1)
	{
	  discount=discount+10;
	  printf("Your discount is %d percent \n", discount);	  
	}
}