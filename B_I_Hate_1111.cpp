#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;


int main(){
    int tt; cin >> tt;
    int theorem = 11*111 - 11 - 111;

    while( tt-- ){
        int n; cin >> n;
        if ( n > theorem ){
            cout << "YES\n";
            continue;
        }
        int i = 0, j = 0;
        for( i = 0; i*111 <= n; i++ ){
            bool found = false;
            for( j = 0; i*111 + j*11 <= n; j++ ){
                // cout << "## " <<  i*111 + j*11 << " | " << n << endl;
                if ( i*111 + j*11 == n ){
                    found = true;
                    break;
                }
            }
            if ( found ) break;
        }
        if ( i*111 + j*11 == n ) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}