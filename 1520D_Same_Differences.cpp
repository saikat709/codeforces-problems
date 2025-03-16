#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n; cin >> n;
    map<int, int> mp;
    
    ll res = 0;

    for( int i = 0; i < n; i++ ){
        int x; cin >> x;
        x -= i;
        res += mp[x];
        mp[x]++;
    }

    cout << res << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    /*
    freopen( "_in.txt",  "r", stdin  );
    freopen( "_out.txt", "w", stdout );
    */

    int tt; cin >> tt;
    while (tt--) solve();
    return 0;
}
