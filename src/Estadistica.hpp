#ifndef __ESTADISTICA_HPP
#define __ESTADISTICA_HPP

#include <ctime>
#include <cstdlib>
#include <cmath>

#define  PI		3.14159265

class Estadistica
{
public:
	
	static void seed()
	{
		srand((unsigned) time(NULL));
	}

	static const inline double normal(const double mean, const double var)
	{
		double x = sqrt(log(uniform()) * (-2)) * cos(uniform() * 2 * PI);

		// Generate sign
		if (uniform() < 0.5)
			x=-x;

		// Move and scale using mean and variance
		return (x * sqrt(var) + mean);
	}

	static const inline double uniform()
	{
		return ((double) rand() / (RAND_MAX + 1));
	}

private:

};

#endif
