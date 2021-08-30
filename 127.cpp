#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	int s;
	cin>>s;

  string c = to_string(s);

	if(c.size()==1 && k>=1)
	c[0]=0;
	int i=1;
	if(c[0]>1 && k>=1)
	{
	c[0]=1;
	k-=1;
    }
	while(k && i<c.size())
	{
         if(c[i]!=0)
		 {
		 	c[i]=0;
		 	k-=1;
	     }
		 i++;
	}
int number;
 std::istringstream iss (c);
iss >> number;


cout<<number<<endl
