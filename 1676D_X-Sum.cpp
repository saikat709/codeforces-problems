#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


// calc sum on every cell
void solve1() {
    int n, m; cin >> n >> m;
    int grid[n][m];
    for( int i = 0; i < n; i++ ){
        for( int j = 0; j < m; j++ ){
            cin >> grid[i][j];
        }
    }

    for( int i = 0, i < m*n; i++  ){
        // calc all 4 diagonals
    }

}

// calc sum diagonally previously
void solve2(){
    int n, m; cin >> n >> m;
    int grid[n][m];
    ll lb2rt[n][m], lt2rb[n][m];
    for( int i = 0; i < n; i++ ){
        for( int j = 0; j < m; j++ ){
            cin >> grid[i][j];
        }
    }

    for( int i = 0, i < 2*m - 1; i++  ){
        int j = 0;
        ll sum = 0;
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    freopen( "_in.txt",  "r", stdin  );
    freopen( "_out.txt", "w", stdout );

    int tt;
    cin >> tt;
    while (tt--) solve();
    return 0;
}
