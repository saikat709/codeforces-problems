#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n; cin >> n;
    vector<int> v(n, 0);
    for( int& i: v ) cin >> i;

    int left = 0, right = 0;
    for( int i = 0;   v[i] == v[0] && i < n;   i++ ) left++;
    for( int i = n-1; v[i] == v[n-1] && i >= 0; i-- ) right++;

    if ( v[0] == v[n-1] ){
        cout << n - ( left == n ? left : left+right ) << endl;
    } else {
        cout << n - ( left > right ? left : right ) << endl;        
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
