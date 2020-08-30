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

char ans[55],s[55];

int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	read(s);
	int len = strlen(s);
	int left,right,now;
	if(len==1)
	{
		cout << s << endl;
		return 0;
	}
	if(len%2==0)
	{
		now = len/2-1;
		cout << s[now];
		/*
			loop to now push right and left;
		*/
		for(int i=1;i<=len/2;++i)
		{
			if(i==len/2)
			{
				cout << s[now+i] ;
				continue;
			}
			cout << s[now+i] << s[now-i] ;
		}
		cout << endl;
		return 0;
	}
	now = len/2;
	cout << s[now];
	for(int i=1;i<=len/2;++i)
	{
		cout << s[now+i] << s[now-i] ;
	}
	cout << endl;
	return 0;
}
