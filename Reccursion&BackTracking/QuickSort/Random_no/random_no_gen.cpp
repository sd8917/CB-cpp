#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;
int main(){
    //Take as input system time to generate a random number
    srand(time(NULL));

//This will print a random in between 1 to 100.
    cout<<"The number is "<<rand()%100<<endl;

    return 0;
}
