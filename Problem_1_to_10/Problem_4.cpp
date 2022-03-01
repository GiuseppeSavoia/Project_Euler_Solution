// Largest palindrome product

// A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
// Find the largest palindrome made from the product of two 3-digit numbers.

#include <iostream>

using namespace std;

int main(){

    int n,r,sum=0,temp , it_is;    
    
    for (int i = 900; i < 1000; i++){
        for (int j = 900; j < 1000; j++){
            n = i*j;   
            temp=n;    
            while(n>0){    
                r=n%10;      
                sum=(sum*10)+r;  
                n=n/10;    
            }
            if(temp==sum) cout << "the product of "<< i <<  " and " << j << " = " << temp <<" is Palindrome." << endl; 
            sum = 0;
        }
    }     
    return 0;  
}
