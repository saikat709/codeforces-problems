#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> ar1(n, 0), ar2(n, 0);
    bool equal = true, equalRev = true;

    for(int& i: ar1) cin >> i;
    for(int& i: ar2) cin >> i;
    
    for( int i = 0; i < n; ++i ){
        if( ar1[i] != ar2[i] )     equal    = false;
        if( ar1[i] != ar2[n-i-1] ) equalRev = false;
    }

    if ( equal || equalRev ) cout << "Bob" << endl;
    else cout << "Alice" << endl;
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
