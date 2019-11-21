#include <iostream>
using namespace std;

// Given N, find the no set bits (No of 1's in binary represenation)
// Bitwise Operators !

int main() {

    int n;
    cin>>n; //Let the input be the 5 -(0101)
    int ans = 0;

    for( ;n>0;n=n>>1){  //
        ans = ans + (n&1);    // n = 1&1,0&1,1&1,0&1; // count the total no of 1.
    }
    cout<<ans <<endl;

    return 0;
}
