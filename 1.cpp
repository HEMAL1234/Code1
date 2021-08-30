#include<bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld double
#define ii pair<int,int>
using namespace std;
int n,m,t,ans;
pair <int,int> p[1010];
vector <ii> v;
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        ans = 0;
        v.clear();

        scanf("%d%d",&n,&m);
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&p[i].F);
            p[i].S = i;
        }

        if(m<n || n==2)
        {
            printf("-1\n");
            continue;
        }

        sort(p+1,p+n+1);

        for(int i=2;i<=n;i++)
        {
            ans += p[i].F + p[i-1].F;
            v.push_back( { p[i].S , p[i-1].S } );
        }

        ans += p[1].F + p[n].F;
        v.push_back( { p[1].S , p[n].S } );

        for(int i=n+1;i<=m;i++)
        {
            ans += p[1].F + p[2].F;
            v.push_back( { p[1].S , p[2].S } );
        }

        printf("%d\n",ans);

        for(auto x:v)
            printf("%d %d\n",x.F,x.S);
    }
}
