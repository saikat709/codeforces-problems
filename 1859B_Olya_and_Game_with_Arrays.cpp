#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve() {
    int n; cin >> n;
    ll sum_second = 0, min_second = INT_MAX, min_first = INT_MAX;

    while( n-- ){
        int m; cin >> m;
        vector<ll> v(m, 0);
        for( auto& i: v ) cin >> i;
        sort(v.begin(), v.end());

        sum_second += v[1];
        min_second = min( v[1],   min_second );
        min_first  = min( v[0],     min_first );
    }

    cout << sum_second + min_first - min_second << endl;
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
