#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n, j = 0; cin >> n;
    vector<int> arr(n, 0), fq(n, 0), ans(n, 0);
    map<int, bool> isPrinted;

    for( int& i: arr ){
        cin >> i;
        fq[i-1]++;
    }

    for( int i = 0; i < n; i++ ){
        if ( isPrinted[arr[i]] ) {
            while( fq[j] ) j++;
            ans[i] = j + 1;
            j++;
        } else {
            ans[i] = arr[i];
            isPrinted[arr[i]] = true;
        }
    }

    for( int i : ans ) cout << i << ' ';
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    // freopen( "_in.txt",  "r", stdin  );
    // freopen( "_out.txt", "w", stdout );

    int tt;
    cin >> tt;
    while (tt--) solve();
    return 0;
}
