#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n; cin >> n;
    vector<int> v(n, -1);

    int m, ind = 0, cur = n;
    m = n % 2 == 0 ? n/2 : n/2 + 1;

    for( int i = ind; i < m; i++ ){
        v[ind] = cur;
        ind += 2;
        cur -= 2;
    }

    m = n/2; 
    ind = n%2 == 0 ? n-1 : n-2;
    cur = n-1;
    for( int i = 0; i < n/2; i++ ){
        v[ind] = cur;
        ind -= 2;
        cur -= 2;
    }

    for( int& i: v ) cout << i << " ";
    cout << "\n";
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
