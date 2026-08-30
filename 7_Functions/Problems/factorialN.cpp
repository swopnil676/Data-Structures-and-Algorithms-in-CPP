#include<iostream>
using namespace std;

int factorialN(int n){
   int fact = 1;
   for(int i=1;i<=n;i++){
      fact *= i;
   }
   return fact; //control retuen
}

int main(){
   cout<<factorialN(10)<<endl;
   cout<<factorialN(5)<<endl;
}