#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    map<int, int> mp;
    vector<int> ans(n, 1);
    int numCond = 1;

    for( int i = 0; i < n; i++ ){
        int a; cin >> a;
        mp[a]++;
        if ( mp[a] == 2 && numCond < 3 ){
            ans[i] = ++numCond;
        }
    }

    if ( numCond < 3 ){  // two condition not matched
        cout << -1 << "\n";
    } else {
        for( int& i: ans ) cout << i << " ";
        cout << "\n";
    }

}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    // freopen("_in.txt", "r", stdin );
    // freopen("_out.txt", "w", stdout );

    int tt = 1; cin >> tt;

    while ( tt-- ) solve();

    return 0;
}