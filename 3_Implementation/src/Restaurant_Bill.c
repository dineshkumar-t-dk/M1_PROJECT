#include<stdio.h>
#include<string.h>
#include<stdlib.h>
double price[7] = {100.00 , 150.00 , 60.00 , 85.00 , 30.00 , 15.00 , 200.00 };
double mealTaxPrices[7];
int adultNumber,childNumber;
void printMeals();
void orderMeals();
double orderForAdult();
double orderForChildren();
int main()
{
    char response = 'y';
     printMeals();
     while(response == 'y'|| response == 'Y')
    {
            printf("ENTER THE NUMBER OF ADULTS :");
            scanf("%d",&adultNumber);
            printf("ENTER THE NUMBER OF CHILDREN:");
            scanf("%d",&childNumber);
            orderMeals();
            printf("\nDO YOU WANT TO PROCEED FURTHER(y/n):");
            scanf("\n%c",&response);
    }
 printf("\n      ******************* THANK YOU FOR COMING  ************************\n");
 printf("\20*********************   PLEASE VISIT US AGAIN  *************************\20 \n");
   system("pause");
   return 0;
}
void printMeals()
{
      printf("\20******************  WELCOME TO OUR RESTURANT *************************\20\n");
      printf(" \t\t\t BELOW IS THE MENU:\20\n");
      printf(" \t\t\t ITEMS\t\t\tPRICE:\n");
      printf(" \t\t\t \22*******************************\22\n");
      printf(" \t\t\t 1- Fried Rice\t\tRupees 100.00\n");
      printf(" \t\t\t 2- Biriyani(Chicken)\tRupees 150.00\n");
      printf(" \t\t\t 3- Noodles\t\tRupees  60.00\n");
      printf(" \t\t\t 4- Chicken 65\t\tRupees  85.00\n");
      printf(" \t\t\t 5- Scoop icecream\tRupees  30.00\n");
      printf(" \t\t\t 6- Cone ice\t\tRupees  15.00\n");
      printf(" \t\t\t 7- Tandoori\t\tRupees 200.00\n");
      printf("\n");
}
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
double orderForAdult()
{
     int menuOption,i,amount;
      char response = 'y';
      double totalPerPerson = 0.0,totalAllPerson = 0.0;
      double tax = 5.0;
      if(adultNumber <=0)
		   printf("\n ");
	  else
      printf("*\tADULTS:\n");
      for(i=0;i<adultNumber;i++)
     {
               printf("adult %d ENTER YOUR ORDER\n",i+1);
               while(response == 'y' || response == 'Y')
               {
                              printf("ENTER YOUR OPTION:");
                              scanf("%d",&menuOption);
							  if(menuOption<1 || menuOption>7)
							  {
								  printf("SORRY WE DON'T HAVE THIS ORDER\nAGAIN! ");
								  continue;
							  }
                              printf("ENTER YOUR NUMBER OF ORDER:");
                              scanf("%d",&amount);
                           totalPerPerson = totalPerPerson + (amount * price[menuOption - 1] );
                              printf("\nDO YOU WANT TO PROCEED FURTHER(y/n):");
                              scanf("\n%c",&response);
               }
               printf("\n");
               totalAllPerson += totalAllPerson +  totalPerPerson;
               totalPerPerson = 0.0;
               response = 'y';
     }
     return totalAllPerson + ((totalAllPerson * tax) / 100);
}
double orderForChildren()
{
       int menuOption,i,amount;
      char response = 'y';
      double totalPerChild = 0.0,totalAllChildren = 0.0;
      double tax = 5.0,oneOrder;
       if(childNumber <=0)
		   printf("\n");
	   else
       printf("*\tCHILDREN:\n");
       for(i=0;i<childNumber;i++)
     {
               printf("child %d ENTER YOUR ORDER\n",i+1);
               while(response == 'y' || response == 'Y')
               {
                              printf("ENTER YOUR OPTION:");
                              scanf("%d",&menuOption);
							  if(menuOption<1 || menuOption>7)
							  {
								  printf("SORRY WE DON'T HAVE THIS ORDER \nAGAIN! ");
                                  continue;
							  }
                              printf("ENTER YOUR NUMBER OF ORDER:");
                              scanf("%d",&amount);
                              oneOrder = (price[menuOption - 1] * 60)/100 ;
                              totalPerChild = totalPerChild + (amount * oneOrder)  ;
							  printf("DO YOU WANT TO PROCEED FURTHER(y/n):");
                              scanf("\n%c",&response);
               }
               totalAllChildren += totalAllChildren +  totalPerChild;
               response = 'y';
               totalPerChild = 0.0;
               printf("\n");
     }
     return totalAllChildren + ((totalAllChildren * tax) / 100);
}
