#include"Restaurant_Bill.h"
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
