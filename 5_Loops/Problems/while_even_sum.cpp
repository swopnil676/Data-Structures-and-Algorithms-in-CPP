#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int evenSum=0;
    
    int i=1;
    while(i<=n){
        if(i%2 == 0){
            cout<<i<<" "<<endl;
            evenSum += i;
        }
        i++;
    }
    cout<<"sum of the numbers: "<<evenSum;
    return 0;
}