#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


// should be increasing, decreasing
// or, left side increasing, right side decreasing
// from a specific point
void solve() {
    int n, j; cin >> n;
    vector<int> nums(n, 0);
    bool isOkay = true;
    int indMax = 0, maxValue =  INT_MIN;

    for( int i = 0; i < n; i++ ){
        cin >> nums[i];
        if ( nums[i] > maxValue ){
            maxValue = nums[i];
            indMax = i;
        }
    }
    
    j = 1;
    while( indMax + j < n ){
        if ( nums[indMax + j] > nums[indMax+ j-1] )
            isOkay = false;
        j++;
    }
    j = 1;
    while( indMax - j >= 0 ){
        if ( nums[indMax - j] > nums[indMax - j + 1] )
            isOkay = false;
        j++;
    }

    cout << ( isOkay ? "YES\n" : "NO\n" );
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
