#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;


int main(){
    int n; cin >> n;
    int nums[n+1] = {0}, ans = 0, dp[n+1][2] = {{}};
    
    for (int i = 1; i <= n; i++) {
        cin >> nums[i];
    }

    int sum = accumulate(nums, nums + n + 1, 0);

    if ( n == 1 ) {
        cout << 1 - nums[1] << "\n";
        return 0;
    }

    for (int i = 1; i <= n; i++){
        if ( nums[i] == 0 ){
            dp[i][0] = dp[i-1][0] + 1;
            dp[i][1] = dp[i-1][1];
        } else{
            dp[i][0] = dp[i-1][0];
            dp[i][1] = dp[i-1][1] + 1;
        }
    }

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            int ones = dp[i][1] - dp[j-1][1];
            int zeros = dp[i][0] - dp[j-1][0];
            if ( zeros > ones ){
                ans = max(ans, sum - ones + zeros );
            }
        }
    }

    if ( ans == 0 ) ans = sum - 1;
    cout << ans << "\n";
    return 0;
}

// we could also count the ones and zeros inside the loop using a for loop 
// bcz n <= 100 is a small constraint
// used dp bcz was practicing dp
