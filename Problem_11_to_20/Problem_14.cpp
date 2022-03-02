// Longest Collatz sequence

// The following iterative sequence is defined for the set of positive integers:
// n → n/2 (n is even)
// n → 3n + 1 (n is odd)
// Using the rule above and starting with 13, we generate the following sequence:
// 13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
// It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. 
// Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.
// Which starting number, under one million, produces the longest chain?
// NOTE: Once the chain starts the terms are allowed to go above one million.

#include <iostream>

using namespace std;


int main(){
    
    long long int count_max = 0;
    long long int n_info , n;

    for (long long int i = 100; i < 1000000; i++){
        
        long int count = 1 ; // because we consider the first number in the count
        n = i;
        long int n_init = n;

        do{
            if(n % 2 == 0){
                n = n / 2;
            }else
                n = 3 * n + 1;
            count++;
        } while (n != 1);

        if(count > count_max){
            
            n_info = n_init;
            count_max = count;
            cout << "n_init = " << n_info << " count_max = "<< count_max << endl;
        }    
    }    
    return 0;
}