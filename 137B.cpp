#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k,m;
    cin>>t;
    m=t;
    int a[5001];


    while(t--)
    {
        cin>>k;
        a[k]=1;
    }
    int d=0;
    for(int i=1;i<=m;i++)
    {
        if(a[i]==0)
        d++;
    }
    cout<<d;
}
