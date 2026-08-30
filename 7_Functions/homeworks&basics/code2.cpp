#include<iostream>
using namespace std;


//function defination 
int printHello(){
    cout<<"hello\n";
    return 3;
}

int main(){
    // function call / invoke
    int val = printHello();
    cout<<"val = "<<val<< endl;
    return 0;
}