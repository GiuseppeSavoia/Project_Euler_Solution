//Summation of primes

//The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

// Find the sum of all the primes below two million.

#include <iostream>

using namespace std;

bool prime(long int num){
    if (num <= 1){
        return 0;
    }
    for(int i = 2; i< num; i++){
        if(num%i ==0)
            return 0;
    }
    return 1;
}

int main(){

    long long int sum = 0;

    for (size_t i = 0; i < 2000000; i++){
        if (prime(i)){
            sum += i;
        }       
    }
    cout << sum;

    return 0;  
}