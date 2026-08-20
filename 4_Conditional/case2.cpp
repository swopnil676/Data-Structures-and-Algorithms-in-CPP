#include<bits/stdc++.h>
using namespace std;

int main(){
    char ch;
    cout<<"enter char: ";
    cin >> ch;

    if(ch>= 65 && ch<= 90){
        cout<<"uppercase"<<endl;
    }else{
        cout<<"lowercase"<<endl;
    }
    return 0;
}