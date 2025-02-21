#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;


int main(){
    int tt; cin >> tt;
    while( tt-- ){  
        int n; cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }

        bool isPossible = true;
        for( int i = 0; i < n-2; ++i ){
            // if( nums[i+1] - nums[i]*2 < 0 ){
            //     isPossible = false;
            //     break;
            // }

            nums[i+1] -= nums[i]*2;
            nums[i+2] -= nums[i]; 
            nums[i] = 0;

            if ( nums[i+1] < 0 || nums[i+2] < 0  ){
                isPossible = false;
                break;
            }
        }

        for( int num: nums ){
            if ( num != 0 ) isPossible = false;
        }

        cout << ( isPossible ? "YES\n" : "NO\n" );
    }
    return 0;
}