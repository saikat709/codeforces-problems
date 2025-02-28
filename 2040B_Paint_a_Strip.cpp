#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, ans = 2, cur = 4;
    cin >> n;

    if ( n <= 2 ){
        cout << n << "\n";
        return;
    }

    while( cur < n ){
        cur = 2*cur + 2;
        ans++;
    }

    cout << ans << endl;

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
