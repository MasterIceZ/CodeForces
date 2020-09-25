#include <bits/stdc++.h>
using namespace std;
#define int long long
#define V_IN(x,v) for(auto& x : v)
#define V_OUT(x,v) for(auto x : v)
bool Q = true;
void solution(){
    int n;
    cin >> n;
    vector<int>v(n);
    V_IN(x,v){
        cin >> x;
    }
    for(int i=1;i<n;++i){
        if(v[i-1]<=v[i]){
            cout << "YES" << endl;
            return ;
        }
    }
    cout << "NO" << endl;
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