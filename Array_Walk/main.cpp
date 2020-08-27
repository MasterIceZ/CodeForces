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
	long long T;
	read(T);
	while(T--)
	{
		int n,k,z,sum;
		read(n,k,z);
		vector <int> v(n+1);
		for(int i=1;i<=n;++i)
		{
			read(v[i]);
		}
		sum = 0;
		for(int i=0;i<=z;++i)
		{
			int st = k - i*2;
			if(st < 0)
			{
				continue;
			}
			int sm,mx;
			sm = mx = 0;
			for(int j=1;j<=st+1;++j)
			{
				if(j<=n-1)
				{
					mx = max(mx,v[j]+v[j+1]);
				}
				sm += v[j];
			}
		sum = max(sum, sm + mx*i);
		}
		cout << sum << endl;
	}
	return 0;
}
