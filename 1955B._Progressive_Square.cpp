#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n, c, d, a11 = INT_MAX;
    cin >> n >> c >> d;
    map<int, int> fq;
    for( int i = 0; i < n*n; ++i ){
        int a; cin >> a;
        fq[a]++;
        a11 = min(a11, a);
    }

    bool isProgressive = true;
    for( int i = 0; isProgressive && i < n; ++i ){
        int b = a11;
        for( int j = 0; isProgressive && j < n; ++j ){
            if ( !fq[b] ) isProgressive = false;
            else if( j > 0) fq[b]--;
            b += d;
        }
        if ( !fq[a11] ) isProgressive = false;
        else fq[a11]--;
        a11 += c;
    }
    cout << ( isProgressive ? "YES\n" : "NO\n" );
}
c
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // freopen( "_in.txt",  "r", stdin  );
    // freopen( "_out.txt", "w", stdout );

    int tt;
    cin >> tt;
    while (tt--) solve();
    return 0;
}
