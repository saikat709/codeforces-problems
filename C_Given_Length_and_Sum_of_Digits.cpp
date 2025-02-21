#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;


int main(){
    int m, s; cin >> m >> s;

    if ( (s == 0 && m > 1) || m*9 < s ){
        cout << -1 << " " << -1 << "\n";
        return 0;
    }

    if ( m == 1 && s == 0  ){
        cout << s << " " << s << "\n";
        return 0;
    }
    
    vector<int> digits;
    while( s != 0 ){
        int d = 0;
        while( d < 9 && s - ( d + 1 ) >= 0 ) d++;
        digits.push_back(d);
        s -= d;
    }

    sort(digits.begin(), digits.end());

    int cnt = digits.size();
    
    if ( cnt < m ){
        cout << 1;
        for(int i = 0; i < m - cnt - 1; ++i ) cout << 0;
        for(int i = 0; i < cnt; ++i ) cout << ( i == 0 ? digits[i] -1 : digits[i] );
    } else {
        for(int i = 0; i < cnt; ++i ) cout << ( digits[i] );
    }

    cout << " ";

    for(int i = cnt - 1; i >= 0; --i ) cout << ( digits[i] );
    for(int i = 0; i < m - cnt; ++i ) cout << 0;
    cout << "\n";

    return 0;
}