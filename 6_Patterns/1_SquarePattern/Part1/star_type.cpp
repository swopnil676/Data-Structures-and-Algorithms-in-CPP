#include<iostream>
using namespace std;

int main(){
    int n = 4; // set the no.s point

    for(int i=0; i<n; i++){ // ouer loop

        for(int j=0; j<n; j++){ // inner loop
            cout<< "* "; // what to be print
        }

        cout<<endl;
    }
    return 0;
}