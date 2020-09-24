#include <bits/stdc++.h>
using namespace std;
#define int long long
#define V_IN(x,v) for(auto& x : v)
#define V_OUT(x,v) for(auto x : v)
bool Q = true;
void solution(){
    int n;
    cin >> n;
    vector<int> v(n),u(n);
    V_IN(x,v){
        cin >> x;
    }
    int token = (n*(n-1)/2)-1;
    if(token <= 0){
        cout << "NO" << endl;
        return ;
    }
    
    bool empty_token = false;
    //sort(v.begin(),v.end());
    for(int i=0;i<n-1;++i){
        if(v[i+1]<v[i]){
            token-=1;
            swap(v[i+1],v[i]);
            i-=2;
        }
        if(token == -1){
            empty_token = true;
            break;
        }
    }
    if(empty_token){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
    
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