#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main ()
{
	int T;
	for(cin >> T ; T--;)
	{
		int n,cnt;
		cin >> n;
		vector<int>v(n);
		for(auto& x : v)
		{
			cin >> x;
		}
		cnt = 0;
		for(auto x : v)
		{
			if(x==0)
			{
				cnt++;
			}
		}
		if(cnt>=n/2)
		{
			cout << cnt << endl;
			while(cnt--)
			{
				cout << "0 ";
			}
		}
		else
		{
			int a = n/2;
			if(a%2)
			{
				a++;
			}
			cout << a << endl;
			while(a--)
			{
				cout << "1 ";
			}
		}
		cout << endl;
	}
	return 0;
}