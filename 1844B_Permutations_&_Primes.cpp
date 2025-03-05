#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    if ( n == 1 ) cout << "1\n";
    else if ( n == 2 ) cout << "1 2\n";
    else {
        vector<int> v(n, 0);
        int cur = 4;
        v[0] = 2, v[n-1] = 3, v[n/2] = 1; 

        for( int& num: v ){
            if ( !num ) num = cur++;
        }
        
        for(int& i : v ) cout << i << " ";
        cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0),     cout.tie(0);

    // freopen( "_in.txt",  "r", stdin  );
    // freopen( "_out.txt", "w", stdout );

    int tt; cin >> tt;
    while ( tt-- ) solve();
    return 0;
}
