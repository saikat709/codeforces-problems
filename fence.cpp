#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){

    // freopen("input.txt", "r", stdin);

    ll n, k, cur_sum = 0;  cin >> n >> k;
    ll min_sum = LONG_MAX;
    ll res_ind = 1;

   vector<ll> nums(n + 2, 0);
    for ( ll i = 1; i <= n ; ++i ) cin >> nums[i];

    for ( ll i = 1; i <= n+1 ; ++i ){
        nums[i] = nums[i-1] + nums[i];
        // cout << "nums[i]" << nums[i] << endl;
        // cout << nums[i-1] << " ";
    }
    // cout << nums[n] << endl;


    for ( ll i = 1; i + k -1 <= n; ++i ){
        cur_sum = nums[i + k - 1 ] - nums[i-1];
        // cout << "nums[" << i+k-1 << "]" << endl;
        // cout << "Cur_sum: " << cur_sum << " Where pos: " << i << endl;

        if ( cur_sum < min_sum ){
            min_sum = cur_sum;
            res_ind = i;
        }
    }


    cout << res_ind << endl;

    return 0;
}
