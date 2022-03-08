// 1000-digit Fibonacci number

// The Fibonacci sequence is defined by the recurrence relation:
// Fn = Fn−1 + Fn−2, where F1 = 1 and F2 = 1.
// The 12th term, F12, is the first term to contain three digits.
// What is the index of the first term in the Fibonacci sequence to contain 1000 digits?

#include <iostream>
using namespace std;

int main()
{
    const int k = 1000;
    int number[3][k] = { 0 }, carry, i, counter = 2;
    number[2][k - 1] = number[1][k - 1] = 1;
    while (number[0][0] == 0) {
        carry = 0;
        for (i = k - 1; i >= 0; i--) {
            number[0][i] = (number[1][i] + number[2][i] + carry) % 10;
            carry = (number[1][i] + number[2][i] + carry) / 10;
        }
        for (i = k - 1; i >= 0; i--) {
            number[2][i] = number[1][i];
            number[1][i] = number[0][i];
        }
        counter++;
    }
    cout << counter << endl;
}