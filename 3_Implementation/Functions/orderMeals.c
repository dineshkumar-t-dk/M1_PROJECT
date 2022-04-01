#include"Restaurant_Bill.h"
void orderMeals()
{
	double totalPriceForAdult, totalPriceForChildren;
	double allPayment,discount;
         printf("                      \t\t*** ORDER MENU ***\n");
        totalPriceForAdult =  orderForAdult();
        totalPriceForChildren = orderForChildren();
		allPayment = totalPriceForAdult + totalPriceForChildren ;
     printf("\n \t\t     \22*************************************\22    \n");
     printf(" \t\t   *****************  FINAL BILL   ***********      \n");
     printf(" \t\t\tADULT/CHILD\tCOUNT\t\tTOTAL PRICE\n");
     printf(" \t\t\tADULTS\t\t%d\t\t%5.2f\n",adultNumber,totalPriceForAdult);
     printf(" \t\t\tCHILDREN\t%d\t\t%5.2f\n",childNumber,totalPriceForChildren);
     printf(" \t\t\tTOTAL BILL\t\t\t%5.2f\n",allPayment );
     if(allPayment < 10)
		 discount=((allPayment * 0.5)/100);
     else if(allPayment>= 10 && allPayment<20)
          discount=((allPayment * 1)/100);
     else if(allPayment>= 20 && allPayment<30)
          discount=((allPayment * 1.5)/100);
     else if(allPayment>= 30 && allPayment<40)
          discount=((allPayment * 2.0)/100);
	 else
		  discount= ((allPayment * 5.0)/100);
          printf(" \t\t\tTOTAL BILL AFTER DISCOUNT\t%5.2f\n",allPayment-discount);
}
