#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    int factorial = 1;
    if(n<=1){
        cout<<"The factorial is 1"<<endl;
    }else{
        for(int i=1; i<=n; i++){
            factorial *= i;
        }
        cout <<"The factorial of "<< n << " is " << factorial << endl;
    }
    return 0;
}