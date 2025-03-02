#include <bits/stdc++.h>
using namespace std;


void solve() {
    string s1, s2; cin >> s1 >> s2;

    for( int i = 0; i + 1 < s1.length(); ++i ){
        if ( s1[i] == s2[i] && s1[i] == '0' && s1[i+1] == s2[i+1] && s1[i+1] == '1' ){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // freopen( "_in.txt",  "r", stdin  );
    // freopen( "_out.txt", "w", stdout );

    int tt; cin >> tt;
    while (tt--) solve();
    return 0;
}
