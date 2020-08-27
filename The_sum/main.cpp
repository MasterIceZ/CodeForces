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

vector <int> fib(43);

void build()
{
	fib[1] = 1;
	fib[2] = 1;
	for(int i = 3;i<=41;i++)
	{
		fib[i] = fib[i-1] + fib[i-2];
	}
}

int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	build();
	int s,ans;
	ans = 0;
	read(s);
	for(int i=1;i<=s;++i)
	{
		ans += fib[i];
	}
	cout << ans << endl;
	return 0;
}
