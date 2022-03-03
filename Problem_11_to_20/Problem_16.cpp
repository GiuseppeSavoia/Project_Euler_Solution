// Power digit sum

// 2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.
// What is the sum of the digits of the number 2^1000?

#include<iostream>

using namespace std;
 
int main(){
    int i, j, arr[15];
    for(i=0; i<14; i++){
             arr[i]=0;
    }
    arr[14]=1;
     
    for(int k=0; k<15; k++){
        i=14;
        do{
            arr[i]*=2;
            i--;
        }while(i>=0);
            j=14;
            while(j>=0){
                if(arr[j]>9){
                    arr[j-1]+=((arr[j]-(arr[j]%10))/10);
                    arr[j]%=10;
                     
                }
                j--;
            }
    }
    long int sum=0;
    for(i=0; i<15;i++){
        sum+=arr[i];
    }
    cout<<sum;
    return 0;
}

