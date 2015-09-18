#include<iostream>
#include "MCMath.h"

class Calculate
{
	public:
		/**
		*	GetTimeDipositNYearsLater
		* 
		*	param: fCapital - �¶��汾�� 
		*	param: fYearRate - ������ 
		*	param: n - ���� 
		*/
		double GetTimeDipositNYearsLater(float fMonthCapital, float fYearRate, int n);
		/**
		*	GetMonthTimeDipositOneYear
		*
		*	����¶������ʱ� 
		*	param: fCapital - �¶��汾�� 
		*	param: fYearRate - ������ 
		*/
		double GetMonthTimeDipositOneYear(float fMonthCapital, float fYearRate);
		/**
		*	GetYearTimeDipositNYear
		*
		*	����¶������ʱ� 
		*	param: fCapital - �궨�汾�� 
		*	param: fYearRate - ������ 
		*	param: n - ���� 
		*/
		double GetYearTimeDipositNYear(float fYearCapital, float fYearRate, int n);
		
		Calculate();
		~Calculate();
};
