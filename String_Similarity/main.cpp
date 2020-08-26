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
	int t;
	read(t);
	while(t--)
	{
		int n;
		read(n);		
		string s;
		read(s);
		int p = 0;
		int cnt = 0;
		for(int i=0;i<s.length();++i)
		{
			if(s[i]-'0'==1)
			{
				cnt++;
			}
		}
		if(cnt>s.length()-cnt)
		{
			p = 1;
		}
		for(int i=0;i<n;++i)
		{
			cout << p;
		}	
		cout << endl;
	}
	return 0;
}
