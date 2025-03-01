#include <bits/stdc++.h>
using namespace std;

const int MAX_VAL = 1e9 + 7;

void solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for ( int &i : nums ) cin >> i;

    int m;
    cin >> m;

    while (m--) {
        vector<int> mp(26, MAX_VAL);
        map<int, char> chmp;
        string s;
        cin >> s;
        if (s.size() != n) {
            cout << "NO\n";
            continue;
        }

        bool isMatch = true;
        for ( int i = 0; i < n; i++ ) {
            if ( chmp[nums[i]]  && chmp[nums[i]] != s[i]) {
                isMatch = false;
                break;
            }
            if ( !chmp[nums[i]] ) chmp[nums[i]] = s[i];
        }
        for (int i = 0; i < n; i++) {
            int ind = s[i] - 'a';
            if (mp[ind] != MAX_VAL && nums[mp[ind]] != nums[i]) {
                isMatch = false;
                break;
            }
            if (mp[ind] == MAX_VAL) mp[ind] = i;
        }
        cout << (isMatch ? "YES\n" : "NO\n");
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // freopen( "_in.txt",  "r", stdin  );
    // freopen( "_out.txt", "w", stdout );

    int tt;
    cin >> tt;
    while (tt--) solve();
    return 0;
}