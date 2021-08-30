#include<bits/stdc++.h>
using namespace std;
int main()
{
	int sum,i,s2,ans;
	char ch,ch1;
	string s;
	cin>>s;
i=0;sum=0;
	for(auto it=s.begin();it!=s.end();it++)
	{
		if(i==0)
		{
			ch=*it;i=1;
		}
		else
		{
			ch1=*it;
			if(ch1==ch&&ch=='v')
			{
				sum++;
			}
			ch=ch1;
		}
	}
	i=0;
	s1=0;ans=0;
	for(auto it=s.begin();it!=s.end();it++)
	{
		if(i==0)
		{
			ch=*it;i=1;
		}
		else
		{
			ch1=*it;
			if(ch1==ch&&ch=='v')
			{
				s2++;
			}
			ch=ch1;
		}
		if(*it=='o')
		{
			ans+=(sum-s2)*s2;
		}
	}
	cout<<ans<<endl;
	return 0;
}
