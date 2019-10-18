#include<iostream>
using namespace std;

int dec(int n){
    //Base case
    if(n==0){
        return n;
    }

    //Recursive case
    cout<<n<<" ";
    dec(n-1);

}
int inc(int n){
    //Base case
    if(n==0){
        return n;
    }

    //Recursive case

    inc(n-1);
    cout<<n<<" ";

}

int main(){

    int n=5;
    dec(n);
    cout<<endl;
    inc(n);
    return 0;
}
