#include "pch.h"
#include "../PrimeFactors/PrimeFactors.cpp"

#include <vector>
using namespace std;

TEST(PrimeFactors, Of1) {
	PrimeFactors primeFactor{};
	vector<int> expected = {};

	EXPECT_EQ(expected, primeFactor.of(1));
}

TEST(PrimeFactors, Of2) {
	PrimeFactors primeFactor{};
	vector<int> expected = {2};
	EXPECT_EQ(expected, primeFactor.of(2));
}