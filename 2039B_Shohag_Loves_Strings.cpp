#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s, ans = "-1"; cin >> s;

    if ( s.size() == 1 ){
        ans = "-1";
    } else {
        for( int i = 1; i < s.size(); ++i ){
            if ( s[i-1] == s[i] )
                ans = s.substr(i-1, 2);
            else if ( i >= 2 && s[i-2] != s[i] && s[i-1] != s[i] && s[i-1] != s[i-2] )
                ans = s.substr(i-2, 3);
        }
    }
    cout << ans << "\n";
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
