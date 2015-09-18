#include "Calculate.h"
#include <iostream>

using namespace std;

double Calculate::GetTimeDipositNYearsLater(float fMonthCapital, float fYearRate, int n)
{
	cout<<"�¶��� -> "<<fMonthCapital<<" Ԫ��"<<endl;
	cout<<"������ -> "<<fYearRate<<endl;
	cout<<n<<" ��֮�� ������"<<endl;
	
	double fYearCapital = GetMonthTimeDipositOneYear(fMonthCapital, fYearRate);
	double fNYearCapital = GetYearTimeDipositNYear(fYearCapital, fYearRate, n);
	cout<<"ÿ�¶��棬 ÿ����׳ɹ� ->"<<fYearCapital<<endl;
	cout<<n<<" ��֮�����ʲ� "<<fNYearCapital<<endl;
	
	return fNYearCapital;
}

double Calculate::GetMonthTimeDipositOneYear(float fMonthCapital, float fYearRate)
{
	float fMonthRate = fYearRate / 12 + 1.0; //month Rate
	double dYearCapital = GetSumOfAnProduct(fMonthCapital, fMonthRate, 12);
	return dYearCapital;
}

double Calculate::GetYearTimeDipositNYear(float fYearCapital, float fYearRate, int n)
{
	fYearRate += 1; 
	double dNYearCapital = 	GetSumOfAnProduct(fYearCapital, fYearRate, n);
	return  dNYearCapital;
}

Calculate::Calculate()
{
}

Calculate::~Calculate()
{
}


