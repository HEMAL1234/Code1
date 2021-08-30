#include <bits/stdc++.h>

using namespace std;

const int maxn = 300;

char in[maxn][maxn], ans[maxn][maxn];

int main ()
{
	ifstream cin("input.txt");
	ofstream cout("output.txt");
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
		for(int j = 0; j < n; ++j)
			cin >> in[i][j];
	int size = pow(n, m);
	for(int i = 0; i < size; ++i)
	{
		for(int j = 0; j < size; ++j)
		{
			int x = i;
			int y = j;
			int cnt = 0;
			for(int k = 0; k < m; ++k)
			{
				if (in[x % n][y % n] == '*')
				{
					cnt = 1;
					break;
				}
				x /= n;
				y /= n;
			}
			cout << ((cnt)?'*':'.');
		}
		cout << '\n';
	}
}
