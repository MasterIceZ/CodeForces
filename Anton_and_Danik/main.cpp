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
	int n;
	read(n);
	string s;
	read(s);
	vector <int> cnt(5);
	for(int i=0;i<n;i++)
	{
		if(s[i]=='A')
		{
			cnt[1]++;
		}
		else
		{
			cnt[2]++;
		}
	}
	int mx = max(cnt[1],cnt[2]);
	if(mx==cnt[1] && mx==cnt[2])
	{
		cout << "Friendship" << endl;
		return 0;
	}
	if(mx==cnt[1])
	{
		cout << "Anton" << endl;
	}
	else
	{
		cout << "Danik" << endl;
	}
	return 0;
}
