#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	int a;
	cin>>a;
	int arr[a];
	for(int i =0 ;i<a;i++)
	cin>>arr[i];


	for(int i = 1; i<a-1 ;i++)
	{
		if(arr[i-1]> arr[i] && arr[i+1]>arr[i]){
		cout<<"NO"<<endl;
		return 0;
		}
	}

	cout<<"YES"<<endl;


	return 0;
}
