//checking whether the input is lower case alphabet,upper case alphabet or a numeric value

#include<iostream>
using namespace std ;

int main ()
{
char a;
cout<<"enter the value of a"<<endl;
cin>>a;

if(a>='a' && a<='z' )
{
    cout<<"lower case alphabet"<<endl;
}
else if (a>='A' && a<='Z')
{
    cout<<"upper case alphabet"<<endl;
}


if (a>='0' && a<='9')

    {
cout<<"numeric"<<endl;
}

else
{
cout<<"invalid input";    
}
}
