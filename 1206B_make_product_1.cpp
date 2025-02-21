#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n, negatives = 0, zeroInd = -1, operations = 0;
    cin >> n;
    vector<ll> nums(n, 0);

    for(int i = 0; i < n; i++){
        cin >> nums[i];
        if ( nums[i] < 0  ) negatives++;
        if ( nums[i] == 0 ) zeroInd = i;
    }

    if ( n == 1){
        cout << ( abs(1-nums[0]) ) << endl;
        return 0;
    }

    sort(nums.begin(), nums.end());

    if ( zeroInd == -1 && negatives > 0 && negatives % 2 != 0 ) {
        operations += 1 + (-1)*nums[0];
    }

    int start = ( zeroInd == -1 && negatives % 2 ) == 1 ? 1 : 0;

    for(int i = start; i<n; ++i){
        if ( nums[i] > 0 ) {
            operations += nums[i]  - 1;
        } else if ( nums[i] == 0 ) {
            operations++;
        } else {
            operations +=  (-1)*nums[i] - 1;
        }
        // cout << operations << " $$" << endl;
    }

    cout << operations << endl;

    return 0;
}