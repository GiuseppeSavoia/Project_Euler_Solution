// Number letter counts

// If the numbers 1 to 5 are written out in words: one, two, three, four, five, then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.
// If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, how many letters would be used?

#include <iostream>
#include <string>

using namespace std;


// value of the world from 1 to 19
int one[]={0,3,3,5,4,4,3,5,5,4,3,6,6,8,8,7,7,9,8,8};

// value from twenty till ninety
int ten[]={0,0,6,6,5,5,5,7,6,6};

int sum=0;


void power(long n,int x){
    if(n > 19){
        sum += ten[n / 10] + one[ n % 10];
    }//basically to get digit/digits at a time
    else{
        sum += one[n];
    }

    if(n)
        sum += x;
    }

int main(){

    for(int i=1 ;i<=1000;i++){
            power( ((i / 1000) % 100 ), 8);
            power( ((i / 100) % 10 ), 7);
            power( (i%100), 0);
        }
    
    // adding 2673 for taking in consideration al the “and” which appear 99*9 times, with lenght 3 ,so 99*9*3
    // If you want to calculate the sum of other number remember to take in consideration this '2673'
    cout << sum + 2673 << endl;

    return 0;
}
 