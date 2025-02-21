#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n; cin >> t;
    string s;
    
    while ( t-- ){
        
        int to_right = 0;
        int to_left =  0;

        cin >> n;
        cin >> s;

        for ( const char ch: s ){
            if ( ch == ')' ){
                if ( to_right > 0 ) to_right--;
                else to_left++;
            } else {
                to_right++;
            }
        }

        // cout << "(: " << to_right << "  ): " << to_left << endl;
        cout << max(to_right, to_right) << endl;

    }
    return 0;
}