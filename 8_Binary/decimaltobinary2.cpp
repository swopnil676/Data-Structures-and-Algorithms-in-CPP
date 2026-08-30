#include<bits/stdc++.h>
using namespace std;

int decToBin(int decNum){
    int ans=0, pow=1;

    while(decNum>0){
        int rem = decNum%2;
        decNum /= 2;

        ans += (rem*pow);// incre. of ans
        pow *= 10;// incre. of pow
    }
    return ans;// binary form
}
int main(){
    // int decNum=50;
    // cout<<decToBin(decNum)<<endl;

    //decimal to binary for 1 to 10
    for(int i=1; i<=10; i++){
        cout<<decToBin(i)<<endl;
    }
    return 0;
}