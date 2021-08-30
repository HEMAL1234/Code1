
#include <bits/stdc++.h>


using namespace std;

int main()
{


    int n,k,t;
    cin>>n>>k>>t;
    int x=(t*n*k)/100;
    for(int i=1;i<=n;i++)
    {
        if(x>=k)
        {
            cout<<k<<" ";
            x-=k;
        }
        else if(x>=0)
        {
            cout<<x<<" ";
            x=0;
        }
        else
            cout<<"0 ";
    }

    return 0;
}
