/*
 * AUTHOR : _IceBorworntat926
 * OS     : Ubuntu
 * TASK   : CodeForces
 * */

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(x) (x).begin(),(x).end()
#define space " "
#define endl '\n'
#define dec(a,b) fixed<<setprecision(b)<<a

typedef long long ll;

#define _dbg() cout << "Fly" << endl
#define _DBG(x) cout << x << endl;

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
long long _gcd(long long a,long long b)
{
	if(!a)
	{
		return b;
	}
	if(!b)
	{
		return a;
	}
	if(a%b==0)
	{
		return b;
	}
	return _gcd(b,a%b);
}
long long _lcm(long long a,long long b)
{
	/*a*b = gcd*lcm*/
	return ((a*b)/_gcd(a,b));
}

int32_t main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	while(T--)
	{
		int cnt=0;
        int n;
        cin >> n;
        vector <int> v(n);
        for(int i=0;i<n;++i)
        {
            cin >> v[i];
        }
        int idx;
        sort(v.begin(),v.end());
        idx = lower_bound(v.begin(),v.end(),0) - v.begin();
        //cout << idx << endl;
        int id = idx-1;
        for()
        {

        }
        cout << cnt << endl;
	}
	return 0;
}
