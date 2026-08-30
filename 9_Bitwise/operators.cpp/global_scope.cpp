#include<bits/stdc++.h>
using namespace std;

int x=10;// global scope

int fun(){
    cout<<x<<endl;
}
int main(){
    fun();
    cout<<x<<endl;
    return 0;
}