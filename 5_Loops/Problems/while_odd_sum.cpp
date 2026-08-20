#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int oddSum=0;
    
    int i=1;
    while(i<=n){
        if(i%2 != 0){
            cout<<i<<" "<<endl;
            oddSum += i;
        }
        i++;
    }
    cout<<"sum of the numbers: "<<oddSum;
    return 0;
}