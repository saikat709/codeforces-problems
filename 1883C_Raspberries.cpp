#include <bits/stdc++.h>
using namespace std;

/**
Accepted But wrong for
5 6 
1 2 3 4 5
output: 1, answer: 0
*/


void solve(){
    int n, k, ans = INT_MAX; cin >> n >> k;
    int arr[n] = {0}, even_cnt = 0;
    for( int& i : arr ){
        cin >> i;
        if ( i%2 == 0 ) even_cnt++;
        if ( i%k == 0 ) ans = 0;
        ans = min(ans, k - i%k );
    }
    if ( k != 4 ) cout << ans << endl;
    else {
        if ( even_cnt >= 2 )      cout << 0 << endl;
        else if ( even_cnt == 1 ) cout << min(ans, 1) << endl;
        else                      cout << min(ans, 2) << endl;
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