#include<iostream>
#include "MCMath.h"

class Calculate
{
	public:
		/**
		*	GetYearInterest
		*	param: fCapital - ���� 
		*	param: fYearRate - ������ 
		*/
		double GetYearInterest(float fCapital, float fYearRate);
		/**
		*	GetMonthTimeDipositOneYear
		*
		*	����¶������ʱ� 
		*	param: fCapital - �¶��汾�� 
		*	param: fYearRate - ������ 
		*/
		double GetMonthTimeDipositOneYear(float fMonthCapital, float fYearRate);
		
		Calculate();
		~Calculate();
};
