#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n; 
    
    int evenSum = 0;
    //print even numbers
    for(int i=1; i<=n; i++){
        if(i%2 == 0){
            cout<<i<<" "<<endl;
            evenSum += i;
        }
    }
    cout<<"sum of the numbers :"<<evenSum;
    return 0;
}