// fibonacci sum for first 10 numbers
#include <iostream>
using namespace std;

int main() {
    int n =10;
   int a=0;
   int b=1;
   
   
   cout<<a<<" "<<b<<" ";
   for (int i=1;i<+n;i++)
   {
   int nextnum=a+b;
   cout<<nextnum<<" ";
   a=b;
   b=nextnum;
   }
}
