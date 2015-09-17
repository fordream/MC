#include <iostream>
#include <math.h>

double GetAnProduct(float a, float q, int n)
{
	return a * pow(q, n-1);
}

double GetSumOfAnProduct(float a, float q, int n)
{
	if (q == 1)
	{
		return a * n;
	}else
	{
		double deltaQN = 1 - GetAnProduct(q, q, n);
		double deltaQ = 1 - q;
		return (a * deltaQN) / deltaQ;
	}

}
