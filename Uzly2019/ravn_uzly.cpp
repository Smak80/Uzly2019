#include "ravn_uzly.h"
#include <stdexcept>

double ravn_uzly::operator[](int i) const
{
	if (i < 0 || i >= n)  
	{
		throw std::out_of_range("Out of range, i < 0 or i >= n");
	}
	return a+(b-a)/(n-1)*i;
}

ravn_uzly::ravn_uzly(double a, double b, int n): uzly(a, b, n)
{
	
}
