#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;

    while( t-- ){
        int n; cin >> n;

        vector<int> v(n-2, 0);

        for( int& a: v ) cin >> a;
        
        bool hasArr = true;
        for( int i = 1; i < n-3; i++ ){
            if ( v[i-1] == 1 && v[i+1] == 1 && v[i] == 0 ){
                hasArr = false;
                break;
            }
        }

        cout << ( hasArr ? "YES" : "No" ) << endl;
    }

    return 0;
}