#include<iostream>
#include "MCMath.h"

class Calculate
{
	public:
		/**
		*	GetYearInterest
		*	param: fCapital - 本金 
		*	param: fYearRate - 年利率 
		*/
		double GetYearInterest(float fCapital, float fYearRate);
		/**
		*	GetMonthTimeDipositOneYear
		*
		*	获得月定存年资本 
		*	param: fCapital - 月定存本金 
		*	param: fYearRate - 年利率 
		*/
		double GetMonthTimeDipositOneYear(float fMonthCapital, float fYearRate);
		
		Calculate();
		~Calculate();
};
