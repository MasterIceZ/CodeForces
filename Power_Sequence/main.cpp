/*`
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
	long long n;
	read(n);
	vector <long long> v(n);
	read(v);
	sort(all(v));
	long long ans = 1e18;
	for(long long i=1;i<=v[n-1];++i)
	{
		if(pow(i,n-1) > 1e14)
		{
			break;
		}
		long long sm = 0;
		for(long long j=0;j<n;++j)
		{
			sm += abs(pow(i,j) - v[j]);
		}
		ans = min(ans,sm);
	}
	cout << ans << endl;
	return 0;
}
