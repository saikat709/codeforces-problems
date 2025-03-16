#include <bits/stdc++.h>
#define MOD 1000000007;
using namespace std;
typedef long long ll;


ll largePowerOfTwo(int a){
    if ( a <= 1 ) return 2;

    if ( a%2 == 0 ) {
        ll cur = largePowerOfTwo(a/2)%MOD;
        return cur * cur % MOD;
    } else {
        ll cur = largePowerOfTwo(a/2) %MOD;
        return 2*cur*cur % MOD;
    }
}

void solve(int tt) {
    vector<ll> ns(tt, 0), ks(tt, 0);
    for( ll& i : ns ) cin >> i;
    for( ll& i : ks ) cin >> i;

    for( ll i: ks ){
        cout << largePowerOfTwo(i) << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    // freopen( "_in.txt",  "r", stdin  );
    // freopen( "_out.txt", "w", stdout );

    int tt; cin >> tt;
    solve(tt);
    return 0;
}
