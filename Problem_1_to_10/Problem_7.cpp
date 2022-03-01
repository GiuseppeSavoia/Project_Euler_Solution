// 10001st prime

//By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

//What is the 10 001st prime number?


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
    
    int count = 1;
    int candidate = 1;

    do{
        candidate +=2;
        if(prime(candidate)){
            count++;
        }
    }while (count != 10001);
    cout << candidate;

    return 0;
}
