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
	int q;
	read(q);
	while(q--)
	{
		int n,a,ch,ans;
		ch = 1;
		ans = 0;
		read(n);
		for(int i=1;i<=n;++i)
		{
			read(a);
			if(a!=i&&ch)
			{
				ans++;
			}
			if(a==i)
			{
				ch = 1;
			}
			else
			{
				ch = 0;
			}
		}
		if(ans>2)
		{	
			ans = 2;
		}
		cout << ans << endl;

	}
	return 0;
}
