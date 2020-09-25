#include <string>
#include <iostream>
#include <vector>
#include <cctype>
using namespace std;
//char s[1010];
int32_t main (){
    string s;
    cin >> s;
    vector<char>v;
    for(int i=0;i<s.length();++i){
        if(toupper(s[i])!='A'&&toupper(s[i])!='O'&&toupper(s[i])!='Y'&&toupper(s[i])!='E'&&toupper(s[i])!='U'&&toupper(s[i])!='I'){
            v.push_back(s[i]);
        }
    }
    for(auto x : v){
       cout << "." << x; 
    }
    return 0;
}