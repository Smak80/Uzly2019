#include "uzly.h"
#include <utility>

using namespace std;

uzly::uzly()
{
	a=0;
	b=1;
	n=2;
}

uzly::uzly(double a, double b, int n):a(a),b(b),n(n)
{
	if (this->a>this->b)
	{
		swap(this->a,this->b);
	}
	else if(this->a==this->b)
	{
		this->b++;
	}
	if(this->n<2)
	{
		this->n=2;
	}
}
