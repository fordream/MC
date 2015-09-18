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
		cout<<"请输入月定存资金：";
		cin>>fMonthCapital;
		cout<<endl;
		
		cout <<"请输入年利率（如 0.07）:";
		cin>> fYearRate;
		cout<<endl;
		
		cout<<"请输入定存年数：";
		cin>>n;
		cout<<endl;
		
		cal->GetTimeDipositNYearsLater(fMonthCapital, fYearRate, n);
		
		
		cout<<"如果继续，请输入 1 ， 否则任意键退出 。。。";
		cin>>isContinue;
		cout<<"==========================================="<<endl;
	} while(isContinue == 1);
	
	return 0;
}
