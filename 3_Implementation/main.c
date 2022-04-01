#include"Restaurant_Bill.h"
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
