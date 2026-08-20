#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    int oddSum = 0;
    //print odd numbers
    for(int i=1; i<=n; i++){
        if(i%2 != 0){
            cout<<i<<" "<<endl;
            oddSum += i;
        }
    }
    cout<<"sum of the numbers :"<<oddSum;
    return 0;
}