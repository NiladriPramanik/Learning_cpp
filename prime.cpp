#include <iostream>

using namespace std;

int main()
{
 int n;
 
           cout<<"enter a number to check whether it is prime or not"<<endl;

 cin>>n;
 
 bool c=1 ;    
 
 for (int i=2; i<n ; i++)
 {
 
    if ( n % i == 0)
    
     {
         c=0;
         break;
     }
 }
    if (c==0)
     {
           cout<<"Not a prime";
     }
    else
    {
           cout<<"PRIME";
    }
}
