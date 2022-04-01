#include"Restaurant_Bill.h"
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
