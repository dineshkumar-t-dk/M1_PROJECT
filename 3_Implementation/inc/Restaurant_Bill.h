#ifndef RESTAURANT_BILL_H_INCLUDED
#define RESTAURANT_BILL_H_INCLUDED
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


#endif // RESTAURANT_BILL_H_INCLUDED
