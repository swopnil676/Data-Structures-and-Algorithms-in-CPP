#include<iostream>
using namespace std;

int main(){
    int n = 4; // set the no.s point

    for(int i=1; i<=n; i++){ // ouer loop

        for(int j=1; j<=n; j++){ // inner loop
            cout<<" "<<j; // what to be print
        }

        cout<<endl;
    }
    return 0;
}