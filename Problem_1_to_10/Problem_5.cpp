// Smallest multiple

// 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

#include <iostream>

using namespace std;

int main(){
    for (long long int i = 1; i < 300000000; i++){
        if(i % 11 == 0)
            if(i % 12 == 0)
                if(i % 13 == 0)  
                    if(i % 14 == 0)
                        if(i % 15 == 0)
                            if(i % 16 == 0)
                                if(i % 17 == 0)
                                    if(i % 18 == 0)
                                        if(i % 19 == 0)
                                            if(i % 20 == 0)
                                                cout << i;
    }
    return 0;  
}