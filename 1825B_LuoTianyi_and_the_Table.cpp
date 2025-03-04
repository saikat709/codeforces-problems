#include <bits/stdc++.h>
using namespace std;
#define ll long long

inline void solve(){
	ll n,m;
	cin >> n >> m;
    vector<int> a(n*m +1, 0);

	for(int i = 1; i <= n*m; ++i ) cin >> a[i];
	sort( a.begin() + 1, a.end() );
    if( n > m ) swap(n, m);

    ll ans1 = ( n*m-1 ) * ( a[n*m] ) - a[1]*(n*(m-1)) - a[2]*(n-1);
    ll ans2 = a[n*m] * (n*(m-1)) + a[n*m-1] * (n-1) - a[1] * (n*m-1);
    
    cout << max(ans1, ans2) <<'\n';
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
