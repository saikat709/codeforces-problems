#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, t; cin >> n >> t;
    string s;

    if ( t == 10 ){
        if ( n < 2 ){
            cout << -1 << endl;
            return 0;
        } else{
            for( int i = 1; i <= n; ++i ){
                if ( i == n ) s += "0";
                else s += "1";
            }
        }
    } else {
        for( int i = 1; i <= n; ++i ) s += to_string(t);
    }

    cout << s << endl;

    return 0;
}