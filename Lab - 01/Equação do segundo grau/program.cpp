#include <iostream>
#include <cmath>
using namespace std;

int raizes(float a, float b, float c, float *x1, float *x2)
{
	float delta(pow(b, 2) - 4 * a * c);

	if (delta == 0 || delta > 0)
	{
		*x1 = (-b + sqrt(delta)) / (2 * a);
		*x2 = (-b - sqrt(delta)) / (2 * a);
		if (*x1 != *x2)
		{
			return 2;
		}
		return 1;
	}
	return -1;
}
