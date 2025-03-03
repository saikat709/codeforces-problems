#include <bits/stdc++.h>
using namespace std;

// DID NOT UNDERSTAND CLEARLY
void solve() {
    int a, b; cin >> a >> b;
    for (int i = 0; i < 30; i++) {
        if ((a & (1 << i)) != (b & (1 << i))) {
            cout << (1ll << i) << "\n";
            break;
        }
    }
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
