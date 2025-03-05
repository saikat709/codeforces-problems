#include <bits/stdc++.h>
using namespace std;


void solve() {
    int cnt0 = 0, cnt1 = 0, possible = 0;
    string s; cin >> s;
    for( char& ch: s ) ch == '0' ? cnt0++ : cnt1++;

    for( char& ch: s ){
        if( ch == '1' && (cnt0--) == 0 ) break;
        if( ch == '0' && (cnt1--) == 0 ) break;
        possible++;
    }

    cout << s.size() - possible << "\n";
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
