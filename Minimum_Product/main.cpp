#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--)
    {
        int a,b,x,y,n;
        int aa,bb;
        cin >> a >> b >> x >> y >> n;
        if(max(a-n,x)<=max(b-n,y))
        {
            aa = max(a-n,x);
            n -= a-aa;
            bb = max(b-n,y);
        }
        else
        {
            bb = max(b-n,y);
            n -= bb-b;
            bb = max(a-n,x);
        }
        cout << aa*bb << endl;
    }
    return 0;
}
