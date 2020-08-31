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
	int n,k;
	read(n,k);
	vector <int> v(n);
	read(v);
	sort(all(v));
	int ls = v[k-1];
	if(k==n)
	{
		cout << ls << endl;
	}
	else if(k==0)
	{
		if(v[0]>1)
		{
			cout << "1" << endl;
		}
		else
		{
			cout << "-1" << endl;
		}
	}
	else if(ls!=v[k])
	{
		cout << ls << endl;
	}
	else
	{
		cout << "-1" << endl;
	}
	return 0;
}
