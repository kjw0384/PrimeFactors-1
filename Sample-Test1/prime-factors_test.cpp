#include "pch.h"
#include "../Project10/prime-factors.cpp"
#include <vector>
using namespace std;

TEST(PrimeFacgors, Of1) {
	PrimeFactor prime_factor;
	vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST(PrimeFacgors, Of2) {
	PrimeFactor prime_factor;
	vector<int> expected = {2};
	EXPECT_EQ(expected, prime_factor.of(2));
}
