#include <bits/stdc++.h>
using namespace std;


void solve() {
    int a1, a2, b1, b2, ans = 0;
    cin >> a1 >> a2 >> b1 >> b2;
    
    if ( ( a1>b1 && a2>= b2 ) || ( a2>b2 && a1>= b1 ) ) ans++;
    if ( ( a1>b2 && a2>= b1 ) || ( a2>b1 && a1>= b2 ) ) ans++;

    cout << ans*2 << "\n";
}

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
