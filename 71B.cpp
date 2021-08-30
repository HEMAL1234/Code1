
#include <bits/stdc++.h>


using namespace std;

int main()
{


    int n,b,t;
    cin>>n>>b>>t;
    int x=(t*n*b)/100;
    for(int i=1;i<=n;i++)
    {
        if(x>=b)
        {
            cout<<b<<" ";
            x-=b;
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
