#include<iostream>
using namespace std;

int main(){
    int n = 4;

    for(int i=0; i<n; i++){
        char ch = 'A'+ i;// important
        for(int j = i+1; j>0; j--){
            cout << ch << " ";
            ch--;// important
        }
        cout<< endl;
    }
    return 0;
}