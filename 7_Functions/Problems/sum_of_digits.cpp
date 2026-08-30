#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int num){
    int digSum = 0;

    while(num>0){
        int lastDig = num % 10;
        num /= 10; // 2356 ==> 235 ==> 23 ==> 2 ==> 0

        digSum += lastDig;
    }
    return digSum;
}

int main(){
    cout<<"sum = "<<sumOfDigits(2356)<<endl;
    
    return 0;
}