#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;    cin >> n;
    string s; cin >> s;
    ll cost = 0;
    stack<int> br;

    for( int i = 1; i <= n; i++ ){
        int ch = s[i-1];
        if ( s[i-1] == '_' ){
            ch = br.empty() ? '(' : ')';
        }
        if ( ch == ')' ){
            cost += i - br.top();
            br.pop();
        }
        else br.push(i);
    }

    cout << cost << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    // freopen( "_in.txt",  "r", stdin  );
    // freopen( "_out.txt", "w", stdout );

    int tt; cin >> tt;
    while (tt--) solve();
    return 0;
}

