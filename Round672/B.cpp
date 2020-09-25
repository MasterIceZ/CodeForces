#include <bits/stdc++.h>
using namespace std;
#define int long long
#define V_IN(x,v) for(auto& x : v)
#define V_OUT(x,v) for(auto x : v)
bool Q = true;
void solution(){
    int n,a=0;
    cin >> n;
    vector<int>v(n),c(40,0);
    for(int i=0;i<n;++i){
        int x;
        cin >> x;
        for(int j=31;j>-1;--j){
            if(x >> j & 1){
                a += c[j];
                c[j]+=1;
                break;
            }
        }
    }
    cout << a << endl;
}

int32_t main (){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int T;
    if(!Q){
        solution();
        return 0;
    }
    for(cin >> T;T--;){
        solution();
    }
    return 0;
}