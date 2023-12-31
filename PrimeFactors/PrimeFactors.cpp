﻿#include <vector>
using namespace std;

class PrimeFactors
{
public:
	vector<int> of(int number)
	{
		vector<int> result = {};
		if (number == 1)
			return result;

		for (int dividor = 2; number > 1; dividor++)
		{
			while ((number % dividor) == 0)
			{
				result.push_back(dividor);
				number /= dividor;
			}
		}

		return result;
	}
};