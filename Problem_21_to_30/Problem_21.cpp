// Amicable numbers

// Let d(n) be defined as the sum of proper divisors of n (numbers less than n which divide evenly into n).
// If d(a) = b and d(b) = a, where a ≠ b, then a and b are an amicable pair and each of a and b are called amicable numbers.
// For example, the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110; therefore d(220) = 284. 
// The proper divisors of 284 are 1, 2, 4, 71 and 142; so d(284) = 220.
// Evaluate the sum of all the amicable numbers under 10000.

#include <iostream>

using namespace std;

int proper_divisors(int number){
    int sum = 0;

    for (int i = 1; i < number; i++){
        if (number % i == 0){
            sum += i;
        }
    }
    return sum;
}

int amicable_pair(int number, int other){
    int sum = 0, is_this;

    if ( other != number){
        
        is_this = proper_divisors(other);

        if(is_this == number && is_this > 1 && number > 1){
            sum = other + number;
        }
    }
    return sum;
}

int main(){

    int total = 0, res, sum;

    for (int i = 2; i < 10000; i++) {
        res = proper_divisors(i);
        sum = amicable_pair(i,res);
        total += sum;
    }

    cout << total / 2 ; // that because program find two times the same number
    return 0;
}