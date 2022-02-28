// Special Pythagorean triplet


// A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
// a2 + b2 = c2
// For example, 32 + 42 = 9 + 16 = 25 = 52.
// There exists exactly one Pythagorean triplet for which a + b + c = 1000.
// Find the product abc.

#include <iostream>

using namespace std;

int main(){

    int x;
    
    for (int a = 0; a < 500; a++){
        for (int b = 0; b < 500; b++){
            for (int c = 0; c < 500; c++){
                if (a*a + b*b == c*c){
                    if ( a + b + c == 1000){
                        x = a*b*c;
                    }
                }
            }
        }
    }
    cout << x;
    return 0; 
}