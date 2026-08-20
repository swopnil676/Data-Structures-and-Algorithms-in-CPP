#include<iostream>
using namespace std;

int main(){
    int n = 5;

    for(int i = 0; i<n; i++){
        char ch = 'A'+ i;
        for(int j = 0; j<i+1; j++){
            cout<<ch<< " ";
        }
        cout<<endl;
    }
    return 0;
}
/* How the Logic Works:
  Row 0 (i=0): Inner loop runs 1 time. It prints 'A' + 0. Output: A

  Row 1 (i=1): Inner loop runs 2 times. It prints 'A' + 1 twice. Output: BB

  Row 2 (i=2): Inner loop runs 3 times. It prints 'A' + 2 thrice. Output: CCC */