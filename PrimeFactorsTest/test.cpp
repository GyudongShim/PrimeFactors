#include "pch.h"
#include "../PrimeFactors/PrimeFactors.cpp"

#include <vector>
using namespace std;

class PrimeFactorsFixture : public testing::Test
{
public:
	PrimeFactors primeFactor;
	vector<int> expected{};
	
};


TEST_F(PrimeFactorsFixture, Of1) {
	EXPECT_EQ(expected, primeFactor.of(1));
}

TEST_F(PrimeFactorsFixture, Of2) {
	PrimeFactors primeFactor{};
	expected.push_back(2);

	EXPECT_EQ(expected, primeFactor.of(2));
}