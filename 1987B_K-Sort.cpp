#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n; cin >> n;
    ll prev_max = 0, sum = 0, max_op = 0;

    for(int i = 0; i < n; i++ ){
        ll a; cin >> a;
        prev_max = max(prev_max, a);
        ll d = prev_max - a;
        max_op = max(d, max_op);
        sum += d;
    }

    cout << sum + max_op << "\n";
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
