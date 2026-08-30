#include<iostream>
using namespace std;

int fib(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fib(n-2) + fib(n-1);
}

int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;

    cout<<"The term in fibonacci sequence at position "<<a<<" is "<<fib(a)<<endl;
    return 0;
}
// fibonacci sequence: 0 1 1 2 3 5 8.........