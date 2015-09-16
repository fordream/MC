#include <iostream>
#include "Calculate/Calculate.h"
using namespace std;

int main(int argc, char const *argv[])
{
	cout<<"helo world!"<<endl;
	
	Calculate cal;
	cal.GetYearInterest(2.0,3.0);
	return 0;
}
