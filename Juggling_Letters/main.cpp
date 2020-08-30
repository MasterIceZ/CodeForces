/*
 * AUTHOR : _IceBorworntat926
 * OS     : Ubuntu
 * TASK   : CodeForces
 * */

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define space " "
#define endl '\n'
#define dec(a,b) fixed<<setprecision(b)<<a 

template <class A> void read(vector<A>& v);
template <class A,size_t S> void read(array <A, S>& a);
template <class T> void read(T& x)
{
	cin >> x;
}
void read(double& d)
{
	string t;
	read(t);
	d = stod(t);
}
void read(long double& d)
{
	string t;
	read(t);
	d = stold(t);
}
template <class H,class... T> void read(H& h,T&... t)
{
	read(h);
	read(t...);
}
template <class A> void read(vector <A>& x)
{
	for(auto& a : x)
	{
		read(a);
	}
}
template <class A,size_t S> void read(array<A, S>& x)
{
	for(auto& a : x)
	{
		read(x);
	}
}

int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T;
	read(T);
	while(T--)
	{
		int n;
		read(n);
		vector <string> s(n);
		vector <int> cnt(30);
		read(s);
		for(int i=0;i<n;++i)
		{
			for(int j=0;j<s[i].length();++j)
			{
				cnt[s[i][j]-'a']++;
			}
		}
		int c = 1;
		for(int i=0;i<26;++i)
		{
			if(cnt[i]==0)
			{
				continue;
			}
			if(cnt[i]%n!=0)
			{
				c = 0;
				break;
			}
		}
		cout << (c?"YES\n":"No\n");
	}
	return 0;
}
