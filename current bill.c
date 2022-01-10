#include<stdio.h>
main()
{
	int units;
	float amount,charge,totalbill,surcharge=0.00;
	printf("enter units consumed");
	scanf("%d",&units);
	if(units <=199)
	{
		charge=1.20;
	}
	else if(units>=200 && units<=400)
	{   
	    charge=1.50;
	}
	else if(units>=400 && units<=800)
	{
		charge=1.80;
	}
	else
	{
		charge=2.00;
	}
	amount=units*charge;
	if(amount>400)
	{
	  	surcharge=amount*0.15;
    }
    totalbill=amount+surcharge;
    printf("units:%d\n",units);
    printf("amount:%.2f\n",amount);
    printf("surcharge:%.2f\n",surcharge);
    printf("totalbill:%.2f\n",totalbill);
	}
