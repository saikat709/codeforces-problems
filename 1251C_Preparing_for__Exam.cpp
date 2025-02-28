#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n, m, k; cin >> n >> m >> k;
    vector<int> knows(n+1, 0), questions(m, 0);

    int a;
    for( int i = 0; i < m; ++i ){
        cin >> questions[i];
    }

    for( int i = 0; i < k; ++i ){
        cin >> a;
        knows[a] = 1;
    }

    for( int& i : questions ){
        cout << ( k==n ? 1 : ( k<n-1 ? 0 : !knows[i] ) ); 
    }
    cout << "\n";
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    // freopen("_in.txt", "r", stdin );
    // freopen("_out.txt", "w", stdout );

    int tt; cin >> tt;

    while ( tt-- ) solve();

    return 0;
}