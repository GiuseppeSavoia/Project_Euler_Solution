// Factorial digit sum

// n! means n × (n − 1) × ... × 3 × 2 × 1
// For example, 10! = 10 × 9 × ... × 3 × 2 × 1 = 3628800, 
// and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.
// Find the sum of the digits in the number 100!

#include <iostream>

using namespace std;

int main(){

    int sum = 0 , question = 100 , base = 10 , size_of_number = 160;
    int number[size_of_number]; 


    for(int i = 0; i < size_of_number; i++){
        number[i] = 0;
    }

    int first_digit = 0, carry = 0, replace, product;

    number[first_digit] = 1;

    while(question != 1){ 
        carry = 0;
        for(int i = 0; i <= first_digit; i++){

            product = question*number[i] + carry;
            replace = product%base; 
            carry = product/base; 
            number[i] = replace;

            if(i == first_digit && carry > 0){
                first_digit++;
            }
        }
        question--;
    }

    for(int i = 0; i < size_of_number; i++){
        sum += number[i];
    }

    cout << sum;

    return 0;
}

