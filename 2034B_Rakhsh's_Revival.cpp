#include <bits/stdc++.h>
using namespace std;

//  for a series of zeroes
//  1 0 0 0 0 0 0 0 0 0 0 1
//  skip (m-1), then jump (m-1+k) and add count

void solve(){
    int n, m, k, ans = 0;
    cin >> n >> m >> k;
    string s; cin >> s;
    int zeroes = 0;

    for( int i = 0; i < n; i++ ){
        if ( s[i] == '0' ) zeroes++;
        else zeroes = 0;
        
        if ( zeroes == m ) {
           ans++;
           i += k-1;
           zeroes = 0;
        }
    }
    cout << ans << endl;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    // freopen("_in.txt", "r", stdin );
    // freopen("_out.txt", "w", stdout );

    int tt = 1; cin >> tt;
    while ( tt-- ) solve();
    return 0;
}
