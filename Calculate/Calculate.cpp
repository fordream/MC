#include "Calculate.h"
#include <iostream>

using namespace std;

double Calculate::GetYearInterest(float fCapital, float fYearRate)
{
	cout<<"fCapital -> "<<fCapital<<endl;
	cout<<"fYearRate -> "<<fYearRate<<endl;
	cout<<"Add ->"<<GetAnProduct(fCapital, fCapital, fYearRate)<<endl;
	cout<<"Add ->"<<GetSumOfAnProduct(fCapital, fCapital, fYearRate)<<endl;
}

double Calculate::GetMonthTimeDipositOneYear(float fMonthCapital, float fYearRate)
{
	float fMonthRate = fYearRate / 12 + 1.0; //month Rate
	double dYearCapital = GetSumOfAnProduct(fMonthCapital, fMonthRate, 12);
	return dYearCapital;
} 

Calculate::Calculate()
{
}

Calculate::~Calculate()
{
}


