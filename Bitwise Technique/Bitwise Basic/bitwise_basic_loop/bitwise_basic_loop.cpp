#include <iostream>
using namespace std;

int main() {
   int a = 5;
   int b = 6;

   //Looping in bitwise operator.
   for(int i=1;i<=2;i++)
   {
       int b=0;
       b = a<<i;
       cout<<b<<endl;
   }


   return 0;
}
