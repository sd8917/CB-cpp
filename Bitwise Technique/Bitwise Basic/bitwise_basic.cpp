
#include <iostream>

using namespace std;
int main() {
   int a = 5;
   int b = 6;

   //And and OR operator uses
   int d = a&b; //expected 4
   int c = a|b; //Expected 7

   //Not operator
   int e = ~a;

   //Left shift operator

   int f = 5 << 1; //Expected 10
   int g = 5 << 2; //Expected 20

//Right shifted operator
   int h = 5 >> 1; //Expected 2


   cout<<c<<endl;
   cout<<d<<endl;
   cout<<e<<endl;
   cout<<f<<endl;
   cout<<g<<endl;
   cout<<h<<endl;


   return 0;
}
