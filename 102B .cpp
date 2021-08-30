#include <bits/stdc++.h>
using namespace std;
int main() {
	string a;
cin>>a;
long long sum=0,cnt=0;
while (a.size()>1){
for (int i=0;i<a.size();i++){
	sum+=(int)a[i]-48;
}
stringstream st ;
st<<sum;
a=st.str();
sum=0;
cnt++;
}
cout<<cnt;
return 0;
}
