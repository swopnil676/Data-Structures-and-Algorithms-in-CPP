#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    bool isPrime = true; // bydefauit prime
    for(int i=2; i*i<=n; i++){
        if(n%i == 0){ // non-prime
            isPrime = false;
            break;
        }
    }
    if(isPrime == true){
        cout<<"prime no\n";
    }else{
        cout<<"non prime no\n";
    }
    //isPrime -> true -> prime
    //isPrime -> false -> non prime
    return 0;
}