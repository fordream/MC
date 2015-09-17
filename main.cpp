#include <iostream>
#include "Calculate/Calculate.h"
using namespace std;

int main(int argc, char const *argv[])
{
	cout<<"helo world!"<<endl;
	
	Calculate* cal = new Calculate();

	float capital = 2500.0;
	float yearRate = 1.07;
	double gol = cal->GetMonthTimeDipositOneYear(capital, yearRate);

	cout<<"gol is "<<gol<<endl;
	
	
	
	
	
	return 0;
}
