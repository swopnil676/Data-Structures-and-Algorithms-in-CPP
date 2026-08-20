#include<iostream>
using namespace std;

int main(){
    int n = 4; 

    for(int i=1; i<=n; i++){ // outer

        // char ch = 'A';// important
        char ch =  65;
        
        for(int j=1; j<=n; j++){ // inner start => line start
            cout<<" "<< ch;
            ch += 1;// important
        }
        cout<<endl;
    }
    return 0;
}