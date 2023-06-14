//sum of n numbers using while loop

#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    
    int i = 1 ;
    int sum = 0;

while(i<=n)
{
    sum=sum+i;
    i= i + 1;
}
cout<<"the sum of n numbers is "<<sum<<endl;
}


/*
using formula
//simple code using while loop

#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    
    int a=1 ; //first number
    int l=n; //last number
    int sum=(n/2)*(a+l);
    
    cout<<"the sum is"<<" "<<sum;
    

}
*/

