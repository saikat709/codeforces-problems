#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int num = 1;
    vector<int> v(2*n, 0);

    v[2*n-1] = 2*n;
    v[0] = 2*n - 1;
    for ( int i = 0; i < n - 1; i += 1 ){
        if( i%2 == 0 ) {
            v[n+i] = num;
            v[1+i] = num+1;
        } else {
            v[n+i] = 2*n - num - 1;
            v[1+i] = 2*n - num;
        }
        num++;
    }

    for ( int i = 0; i < 2*n; i++ ){
        cout << v[i] << " \n"[i==n-1];
    }
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
