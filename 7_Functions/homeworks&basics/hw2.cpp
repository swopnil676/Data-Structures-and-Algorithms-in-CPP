#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num){
    if(num <= 1) return false;

    for(int i = 2; i*i <= num; i++){
        if(num % i == 0)
            return false;
    }
    return true;
}

void printPrimes(int n){
    cout << "Prime numbers from 2 to " << n << " are:\n";

    for(int i = 2; i <= n; i++){
        if(isPrime(i)){
            cout << i << " ";
        }
    }
}
int main(){
    int n = 6;
    printPrimes(n);
    return 0;
}
