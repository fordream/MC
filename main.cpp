#include <iostream>
#include "Calculate/Calculate.h"
using namespace std;

int main(int argc, char const *argv[])
{
	cout<<"helo world!"<<endl;
	
	Calculate* cal = new Calculate();
	float fMonthCapital, fYearRate;
	int n;
	
	int isContinue = 1;
	do{
		fMonthCapital = 0.0;
		fYearRate = 0.0;
		n = 0;
		cout<<"�������¶����ʽ�";
		cin>>fMonthCapital;
		cout<<endl;
		
		cout <<"�����������ʣ��� 0.07��:";
		cin>> fYearRate;
		cout<<endl;
		
		cout<<"�����붨��������";
		cin>>n;
		cout<<endl;
		
		cal->GetTimeDipositNYearsLater(fMonthCapital, fYearRate, n);
		
		
		cout<<"��������������� 1 �� ����������˳� ������";
		cin>>isContinue;
		cout<<"==========================================="<<endl;
	} while(isContinue == 1);
	
	return 0;
}
