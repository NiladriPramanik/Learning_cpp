//code for counting no. of 1s in binary of given integer
#include<iostream>

using namespace std;
int main ()
{
    int n ;
    cout<<"enter the number"<<endl;
    cin>>n;
    
    int count = 0 ;
    while(n!=0) {
        //cheking last bit
        if(n&1) {
            count++;
        }
        n = n>>1;
    }
  
    cout<<"no. of 1s in binary"<<" "<<count;
    return count;
}
