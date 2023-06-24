
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
        int m=n;
        int mask = 0;

        if(n==0)
        {
            cout<<"1"<<endl;
            return 1;
        }
        while(m!=0){
            mask = (mask << 1) | 1;
            m=m>>1;
        }
        int ans = (~n)&mask;
        cout<<"Compliment of "<<n<<" is "<<ans<<".";
        return ans;
}
