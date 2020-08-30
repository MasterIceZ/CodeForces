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
		int n,x;
		read(n,x);
		vector<int>v(n);
		//cout << "2" << endl;
		read(v);
		int sum=0;
		int ans = -1;
		for(int i=0;i<n;++i)
		{
			sum+=v[i];
		}
		if(sum%x!=0)
		{
			cout << n << endl;
		}
		else
		{
			int sm = sum;
			for(int i=0;i<n;++i)
			{
				sm-=v[i];
				if(sm%x!=0)
				{
					ans = max(ans,n-i-1);
				}
			}
			for(int i=n-1;i>=0;--i)
			{
				sum-=v[i];
				if(sum%x!=0)
				{
					ans = max(ans,i);
				}
			}
			cout << ans << endl;
		}
	}
	return 0;
}
