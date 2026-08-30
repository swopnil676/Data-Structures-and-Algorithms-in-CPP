#include<bits/stdc++.h>
using namespace std;

void funcIforNotPrime(int n){
        // for 0 and 1
    if(n<=1){ 
        cout<<"number is non-prime"<<endl;
        return ;
    }
        // for greater than 2
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            cout << "Number is non-prime"<<endl;
            return;
        }
    }
    cout << "Number is prime";
}

int main(){
    int n = 6;
    funcIforNotPrime(n);
    return 0;
}
