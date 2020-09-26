#include <iostream>
#include <string>
using namespace std;
#define endl '\n'
int32_t main (){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n = 0;
    int q;
    cin >> q;
    for(int i=0;i<q;++i){
        string s;
        cin >> s;
        if(i==q-1){
            if(s=="X++" || s=="X--"){
                cout << n << endl;
            }
            else if(s=="++X"){
                cout << ++n << endl;
            }
            else
            {
                cout << --n << endl;
            }
        }
        else{
            if(s=="X++" || s=="++X"){
                n++;
            }
            else{
                n--;
            }
        }
        cout << n << endl;
    }
    return 0;
}