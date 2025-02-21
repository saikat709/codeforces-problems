#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, t, cur; cin >> n >> t;
    vector<int> transport(n);
    for ( int i = 1; i < n; ++i ) cin >> transport[i];

    int pos = 1;

    while ( pos < t ){
        pos += transport[pos];
    }
    cout << ( t == pos ? "YES" : "NO" ) << endl;
    return 0;
}