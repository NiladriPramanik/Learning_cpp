//checking eligibility to vote

#include<iostream>
using namespace std;
int main()
    {
        int age; 
       cout<<"Enter your age:";
       cin>>age;
        if (age>=150)
       cout<<"Invalid age";
      else if (age>=18)
       cout<<"You can vote";
       else 
       cout<<"You can'not vote";
       return 0;
    }
