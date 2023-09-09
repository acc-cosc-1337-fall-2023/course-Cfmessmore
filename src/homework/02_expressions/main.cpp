//write include statements
#include<iostream>
#include "hwexpressions.h"

//write namespace using statement for cout
using namespace std;
using std::cin; using std::cout;
double meal_amount = 0;
double tip_rate = 0;
double tip_amount = 0;
double tax_amount = 0;
double total = 0;

int main()
{
	cout<<"Enter Meal Amount: $";
	cin>>meal_amount;

	cout<<"Enter Tip Rate: ";
	cin>>tip_rate;

	double tax_amount=get_sales_tax_amount(meal_amount);

	double tip_amount=get_tip_amount(meal_amount,tip_rate);

	total = meal_amount + tax_amount + tip_amount;

	cout<<"Meal Amount: "<<meal_amount;
	cout<<"\nTax Amount:  "<<tax_amount;
	cout<<"\nTip Amount:  "<<tip_amount;
	cout<<"\nTotal Amount:  "<<total;
	return 0;
}
