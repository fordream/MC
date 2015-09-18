#include<iostream>
#include "MCMath.h"

class Calculate
{
	public:
		/**
		*	GetTimeDipositNYearsLater
		* 
		*	param: fCapital - 月定存本金 
		*	param: fYearRate - 年利率 
		*	param: n - 年数 
		*/
		double GetTimeDipositNYearsLater(float fMonthCapital, float fYearRate, int n);
		/**
		*	GetMonthTimeDipositOneYear
		*
		*	获得月定存年资本 
		*	param: fCapital - 月定存本金 
		*	param: fYearRate - 年利率 
		*/
		double GetMonthTimeDipositOneYear(float fMonthCapital, float fYearRate);
		/**
		*	GetYearTimeDipositNYear
		*
		*	获得月定存年资本 
		*	param: fCapital - 年定存本金 
		*	param: fYearRate - 年利率 
		*	param: n - 年数 
		*/
		double GetYearTimeDipositNYear(float fYearCapital, float fYearRate, int n);
		
		Calculate();
		~Calculate();
};
