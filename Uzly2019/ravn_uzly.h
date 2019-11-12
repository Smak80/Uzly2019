#pragma once
#include "uzly.h"
class ravn_uzly :
	public uzly
{
public:
	virtual double operator[](int i) const;
	ravn_uzly(double a, double b, int n);
};

