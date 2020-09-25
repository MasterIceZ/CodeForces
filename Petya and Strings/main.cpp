#include <iostream>
#include <string>
using namespace std;
int32_t main (){
    string s,t;
    cin >> s;
    cin >> t;
    for(int i=0; i<s.length(); ++i){
        s[i]=tolower(s[i]);
    }
    for(int i=0; i<t.length(); ++i){
        t[i]=tolower(t[i]);
    }
    if(s==t){
        cout << "0"  << endl;
    }
    else if(s>t){
        cout << "1" << endl;
    }
    else{
        cout << "-1" << endl;
    }
    return 0;
}