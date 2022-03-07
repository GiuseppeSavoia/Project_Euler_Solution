// Non-abundant sums

// A perfect number is a number for which the sum of its proper divisors is exactly equal to the number. 
// For example, the sum of the proper divisors of 28 would be 1 + 2 + 4 + 7 + 14 = 28, which means that 28 is a perfect number.
// A number n is called deficient if the sum of its proper divisors is less than n and it is called abundant if this sum exceeds n.
// As 12 is the smallest abundant number, 1 + 2 + 3 + 4 + 6 = 16, the smallest number that can be written as the sum of two abundant numbers is 24. 
// By mathematical analysis, it can be shown that all integers greater than 28123 can be written as the sum of two abundant numbers. 
// However, this upper limit cannot be reduced any further by analysis even though 
// it is known that the greatest number that cannot be expressed as the sum of two abundant numbers is less than this limit.
// Find the sum of all the positive integers which cannot be written as the sum of two abundant numbers.

// Answer: 4179871
#include <iostream>
#include <vector>

using namespace std;

int Prime(int a) {
	int s = 1;
	for (int k = 2; k*k <= a; k++) {
		int p = 1;
		while (a % k == 0) {
			p *= k;
			p++;
			a /= k;
		}
		s *= p;
	}
	if (a > 1) {
		s *= a + 1;
	}
	return s;
}

bool IsAbundant(int a) {
	return Prime(a) > a << 1;
}

int sum_item(bool nonSum[], int length) {
	int sum = 0;
	for (int i = 0; i < length; i++) {
		if (!nonSum[i]) {
			sum += i + 1;
		}
	}
	return sum;
}

int main() {
	const int limit = 20161;
	
	vector<int> abundant;
	for (int i = 12; i <= limit; i++) {
		if (IsAbundant(i)) {
			abundant.push_back(i);
		}
	}

	bool nonsum[limit] = {false};
	for (int a = 0; a < abundant.size(); a++) {
		for (int b = 0; b < abundant.size(); b++) {
			if (abundant[a] + abundant[b] < limit) {
				nonsum[abundant[a] + abundant[b] - 1] = true;
			}
		}
	}
	
	int sum = sum_item(nonsum, limit);
	
	cout << sum << endl;

	return 0;
}