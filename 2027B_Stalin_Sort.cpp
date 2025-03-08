#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n; cin >> n;
    vector<int> nums(n, 0);
    for( int& i: nums ) cin >> i;
    int bestCnt = 0;

    for( int i = 0; i < n; i++ ){
        int cnt = 0;
        for( int j = i; j < n; j++ ){
            if ( nums[j] <= nums[i] ) cnt++;
        }
        bestCnt = max(bestCnt, cnt);
    }


    cout << n - bestCnt << '\n';
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
