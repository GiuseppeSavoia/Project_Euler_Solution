// Largest prime factor

// The prime factors of 13195 are 5, 7, 13 and 29.

// What is the largest prime factor of the number 600851475143 ?

#include <iostream>

using namespace std;

int f[1000], expo[1000], len;

void primeFact(long long int n) {
    if(n == 1) {
        len++;
        f[len] = 2;
        expo[len] = 0;
        return;
    }
    int d = 2;
    while(1LL * d * d <= n && n > 1) {
        int k = 0;
        while(n % d == 0) {
            k++;
            n /= d;
        }
        if(k > 0) {
            len++;
            f[len] = d;
            expo[len] = k;
        }
        d++;
    }
    if(n > 1) {
        len++;
        f[len] = n;
        expo[len] = 1;
    }
}

int main()
{   long int num;
    num = 600851475143;
    primeFact(num);
    for(int i = 1; i <= len; i++) {
        cout << f[i] << " " << expo[i] << "\n";
    }
    return 0;
}

