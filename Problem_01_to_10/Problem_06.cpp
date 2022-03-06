// Sum square difference

// The sum of the squares of the first ten natural numbers is,
// 1^2 + 2^2 + ... + 10^2 = 385

// The square of the sum of the first ten natural numbers is 
// (1 + 2 + ... + 10 )^2 = 3025

//Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 
// 3025 − 385 = 2640
// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

#include <iostream>

using namespace std;

int main(){
    int sum_of_square = 0;
    int square_of_sum = 0;
    int square_of_sum2;

    for (int i = 0; i < 101; i++){
        sum_of_square += i*i;
        square_of_sum += i;
    }

    square_of_sum2 = square_of_sum*square_of_sum;

    cout << square_of_sum2 - sum_of_square;

    return 0;  
}