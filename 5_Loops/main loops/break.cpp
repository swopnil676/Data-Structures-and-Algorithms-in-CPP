#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 50;
    int sum = 0;

    for(int i=1; i<=n; i++){ // 1+2+3+4+5=15
        sum +=i;
        if(i==5){
            break;
        }
    }
    cout<<"sum = "<<sum<<endl;
    return 0;
}