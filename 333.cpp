#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,a[300000],sub[300000];
    long long sum=0;
    scanf("%d%d",&n,&k);
    scanf("%d",&a[0]);
    for(int i=1;i<n;i++){
        scanf("%d",&a[i]);
        sub[i-1]=a[i]-a[i-1];
    }
    sort(sub,sub+n-1);
    for(int i=0;i<n-k;i++)
        sum+=sub[i];
    printf("%lld",sum);
}
