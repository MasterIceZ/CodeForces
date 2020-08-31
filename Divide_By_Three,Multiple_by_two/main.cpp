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
	#define int long long
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	read(n);
	vector<int>v(n);
	read(v);
	vector<int>d(n,0),x(n,-1);
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<n;++j)
		{
			if(i==j)
			{
				continue;
			}
			if(v[j]==v[i]*2)
			{
				d[j]++;
				x[i] = j;
			}
			else if(v[j]*3==v[i])
			{
				d[j]++;
				x[i] = j;
			}	
		}
	}
	int st = -1;
	for(int  i=0;i<n;++i)
	{
		if(d[i]==0)
		{
			st = i;
			break;
		}
	}
	vector <int> a;
	while(st != -1)
	{
		a.push_back(v[st]);
		st = x[st];
	}
	for(int& i : a)
	{
		cout << i << space ;
	}
	cout << endl;
	return 0;
}
