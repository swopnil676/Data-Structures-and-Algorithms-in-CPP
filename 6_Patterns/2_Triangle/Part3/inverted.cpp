#include<iostream>
using namespace std;

int main(){
    int n = 4;
    
    for(int i = 0; i<n; i++){
        //spaces
        for(int j = 0; j<i; j++){ // i items
            cout<<" ";
        } 
        //numbers    
        for(int j = 0; j<n-i; j++){ // n-i items
            cout<<(i+1);
        }
        cout<<endl;
    }
    return 0;
}