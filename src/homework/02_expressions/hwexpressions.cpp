#include "hwexpressions.h"

//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write function code here
const double tax_rate = 6.75;
double get_sales_tax_amount(double meal_amount)
{
	return (tax_rate/100) * meal_amount;
}

double get_tip_amount(double meal_amount, double tip_rate)
{
	return meal_amount * tip_rate;
}


