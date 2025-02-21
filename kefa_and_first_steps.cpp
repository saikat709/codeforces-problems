#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    int max_count = 1;
    int count = 1;
    int prev; cin >> prev; n--;

    while( n-- ){
        int cur; cin >> cur;
        // cout << prev << " " << cur << " " << count << endl;
        if ( cur >= prev ) count++;
        else count = 1;

        if ( max_count < count ) max_count = count;

        prev = cur;
    }

    cout << max_count << endl;

    return 0;
}