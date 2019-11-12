#pragma once
class uzly abstract
{
protected:
	double a,b;
	int n;
public:
	uzly();
	uzly(double a, double b, int n);
	virtual double operator[](int i) const =0;
	double get_a() const
	{
		return a;
	}
	double get_b() const
	{
		return b;
	}
	int get_n() const
	{
		return n;
	}
};


