#include <bits/stdc++.h>
using namespace std;


void solve() {
    string s; cin >> s;
    int cnt1   = 0,
        cnt0   = 0,
        zeroes = 0;
    long long ans = 0;

    for( char c: s ) zeroes += c == '0';
    for(int i = 0; i < s.size(); i++ ){
        s[i] == '1' ? cnt1++ : cnt0++;
        if( s[i] == '0' && cnt1 > 0 ) ans++;
        if( s[i] == '1' ) ans += zeroes - cnt0;
    }
    cout << ans << '\n';
}

void solve2() {
    string s; cin >> s;
    int ones   = 0,
        zeroes = 0;
    long long ans = 0;

    for(int i = 0; i < s.size(); i++ ){
        if ( s[i] == '0' ){ zeroes++; }
        
        if ( i == s.size()-1 || ( i > 1 && s[i] == '1' && s[i-1] == '0' ) )
            ans += ones > 0 ? ( (long long) ones + 1 )*zeroes : 0;
 
        if( s[i] == '1' ){
            ones++;
            zeroes = 0;
        }
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // freopen( "_in.txt",  "r", stdin  );
    // freopen( "_out.txt", "w", stdout );

    int tt;
    cin >> tt;
    while (tt--) solve2();
    return 0;
}
