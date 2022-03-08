// Reciprocal cycles

// A unit fraction contains 1 in the numerator. The decimal representation of the unit fractions with denominators 2 to 10 are given:
// Where 0.1(6) means 0.166666..., and has a 1-digit recurring cycle. It can be seen that 1/7 has a 6-digit recurring cycle.
// Find the value of d < 1000 for which 1/d contains the longest recurring cycle in its decimal fraction part.

#include <iostream>
#include <vector>

using namespace std;

#define P 1000

vector<int> primes;

void findPrimes(){
	int sievebound = (P-1)/2;
	int calcbound = 15;
	bool sieve[(P-1)/2+1] = {0};

	for (int i = 1; i <= calcbound; i++){
		if (!sieve[i]){
			for (int j = 2*i*(i+1); j <= sievebound; j += 2*i+1){
				sieve[j] = 1;
            }
        }
    }
	if (P > 2){
        primes.push_back(2);
    }
	for (int i = 1; i <= sievebound; i++){
		if (!sieve[i]){
			primes.push_back(2*i+1);
        }
    }
}

int main()
{
	findPrimes();
	int longest = 0, index_a;
	for (int p = primes.size() - 1; p >= 0 && primes[p] > longest; p--){
		bool index[P] = {0};
		for (int i = 1, n = 1, d = primes[p]; n > 0; i++) {
			if (index[n] == 0){
				index[n] = 1;
            }
			else {
				if (i > longest) {
					longest = i;
					index_a = d;
				}
				break;
			}
			n = (n * 10) % d;
		}
	}
	cout << index_a << "\n";
}