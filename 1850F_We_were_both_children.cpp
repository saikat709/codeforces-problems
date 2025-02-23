#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int tt; cin >> tt;

    while( tt-- ){
        int n; cin >> n;
        vector<int> moves(n +1, 0), cnt(n+1, 0);
        
        for( int i = 0; i < n; ++i){
            int x; cin >> x;
            if ( x <= n ) moves[x]++;
        } 

        for(int i = 1; i <= n; ++i ){
            for( int j = i; j <= n; j+=i ) cnt[j] += moves[i];
        }
        cout << *max_element(cnt.begin(), cnt.end()) << "\n";
    }

    return 0;
}