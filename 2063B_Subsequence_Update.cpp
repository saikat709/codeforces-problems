#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n, l, r, i, j, cnt;
    cin >> n >> l >> r;
    vector<int> vRange, vL, vR;
    ll sum1 = 0, sum2 = 0;

    for(i = 1; i <= n; i++ ){
        int a; cin >> a;
        if ( i >= l && i <= r ) vRange.push_back(a);
        else if ( i < l )       vL.push_back(a);
        else if ( i > r )       vR.push_back(a);
    }

    sort(vL.begin(), vL.end());
    sort(vRange.begin(), vRange.end());
    sort(vR.begin(), vR.end());

    i = 0, j = 0, cnt = 0;
    while ( cnt < vRange.size() ){
        if ( i < vL.size() && vRange[j] > vL[i] ){ sum1 += vL[i++]; }
        else { sum1 += vRange[j++]; }
        cnt++;
    }

    i = 0, j = 0, cnt = 0;
    while ( cnt < vRange.size() ){
        if ( i < vR.size() && vRange[j] > vR[i] ){ sum2 += vR[i++]; }
        else { sum2 += vRange[j++]; }
        cnt++;
    }

    cout << min(sum1, sum2) << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    // freopen( "_in.txt",  "r", stdin  );
    // freopen( "_out.txt", "w", stdout );

    int tt;
    cin >> tt;
    while (tt--) solve();
    return 0;
}
