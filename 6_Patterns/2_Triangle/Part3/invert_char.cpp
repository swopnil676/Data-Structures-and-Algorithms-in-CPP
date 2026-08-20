#include<iostream>
using namespace std;

int main(){
    int n = 4;
    
    for(int i = 0; i<n; i++){
        char ch = 'A'+ i;
        //spaces
        for(int j = 0; j<i; j++){ // i items
            cout<<" ";
        } 
        //numbers    
        for(int j = 0; j<n-i; j++){ // n-i items
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}
/*
Row (i)     ,Spaces (j < i),    Characters (j < n-i),       Letter Printed,        Result
0           ,0 spaces,             4 times,                 'A' + 0,                AAAA
1           ,1 space,              3 times,                 'A' + 1,                 BBB
2           ,2 spaces,             2 times,                 'A' + 2,                  CC
3           ,3 spaces,             1 time,                  'A' + 3,                   D
*/