#include "Calculate.h"
#include <iostream>

using namespace std;

double Calculate::GetYearInterest(float fCapital, float fYearRate)
{
	cout<<"fCapital -> "<<fCapital<<endl;
	cout<<"fYearRate -> "<<fYearRate<<endl;
	cout<<"Add ->"<<GetAnProduct(fCapital, fCapital, fYearRate)<<endl;
	cout<<"Add ->"<<GetSumOfAProduct(fCapital, fCapital, fYearRate)<<endl;
}
