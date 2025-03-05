#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    map<string, int> mp;

    bool possible = false;
    for( int i = 0; i < n-1; i++ ){
        if ( mp[s.substr(i, 2)] ) {
            int ind = mp[s.substr(i, 2)] - 1;
            if ( ind < i - 1 ) possible = true;
        } else {
            mp[s.substr(i, 2)] = i + 1; 
        }
        // adding one to know if any index added to map.
        // since map index is initially zero
        // index zero will confuse us
    }

    cout << ( possible ? "YES\n" : "NO\n" );
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    // freopen( "_in.txt",  "r", stdin  );
    // freopen( "_out.txt", "w", stdout );

    int tt;
    cin >> tt;
    while (tt--) solve();
    return 0;
}
