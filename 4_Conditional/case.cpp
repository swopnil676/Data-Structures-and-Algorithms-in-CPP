#include<bits/stdc++.h>
using namespace std;

int main(){
    char ch;
    cout<<"enter char: ";
    cin >> ch;

    if(ch>= 'a' && ch<= 'z'){
        cout<<"lowercase"<<endl;
    }else{
        cout<<"uppercase"<<endl;
    }
    return 0;
}