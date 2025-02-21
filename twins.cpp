#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;

    vector<int> coins(n);
    for( int i = 0; i < n; ++i ) cin >> coins[i];
    sort( coins.begin(), coins.end(), greater() );

    for( int i = 1; i <= n; ++i ){

        int sum_left = accumulate( coins.begin(), coins.begin() + i, 0 );
        int sum_right = accumulate( coins.begin() + i, coins.end(), 0 );

        // cout << "SUM_L: " << sum_left << " SUM_R: " << sum_right << endl;
        if ( sum_left > sum_right ){
            cout << i << endl;
            break;
        }

    }

    return 0;
}