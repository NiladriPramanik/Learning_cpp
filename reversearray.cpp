#include<iostream>
using namespace std;
int main()
{
    //1.entering size of an array
    int n;
    cout<<"enter size of an array:";
    cin>>n;

    //2.declaring array.
    int a[n];

    //3.now entering elements in the array
    for (int i=0;i<n;i++)
    {
        cout<<"enter the elements:";
        cin>>a[i];
    }
    cout<<endl;

    //4. logic for revering the entered array

    int start_array =0;
    int end_array   =n-1;

    while (start_array<end_array)
    {
        swap(a[start_array],a[end_array]);
        start_array++;
        end_array--;
    }
    // 5. now printing the output
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}