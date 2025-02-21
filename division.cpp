#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool has_unique_digits(ll num1) {
    string num_str = to_string(num1);
    set<char> digits(num_str.begin(), num_str.end() );
    return num_str.length() == digits.size();
}

void solve_for_n(ll n) {
    vector<pair<ll, ll>> results;

    ll upper_range = n <= 2 ? n : n/2;
    for (ll s2 = 1; s2 < upper_range && s2*n < 1e10; ++s2) {
        ll s1 = n * s2;
        
        if (has_unique_digits(s1) && has_unique_digits(s2)) {
            results.push_back({s1, s2});
        }
    }
    // sort(results.begin(), results.end());
    
    for (const auto& [s1, s2] : results) {
        cout << s1 << " / " << s2 << " = " << n << endl;
    }
}

int main() {
    int t;
    cin >> t;
    
    bool first_case = true;
    while (t--) {
        if ( !first_case ) {
            first_case = true;
            cout<<"\n";
        }
        ll n;
        cin >> n;
        
        solve_for_n(n);
    }
    return 0;
}
