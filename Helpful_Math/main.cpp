#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int32_t main (){
    string s;
    vector<char>pq;
    cin >> s;
    for(int i=0;i<s.length();i+=2){
        pq.push_back(s[i]);
    }
    sort(pq.begin(),pq.end());
    int c=0;
    for(auto x : pq){
        if(c==0){
            cout << x ;
            ++c;
        }
        else{
            cout << "+" << x;
        }
    }
    cout << endl;
    return 0;
}