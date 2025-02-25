#include <bits/stdc++.h>
using namespace std;


int main(){
    int tt; cin >> tt;

    // freopen("_out.txt", "w", stdout);

    while( tt-- ){

        int n, k; cin >> n >> k;
        string s; cin >> s;

        int cntOdds = 0 , cntEvens  = 0;
        int cntOccurance[26] = {0};

        for( char& c: s ){
            ++cntOccurance[ c - 'a' ];
        }

        for(int i = 0; i < 26; i++ ){
            if ( cntOccurance[i] % 2 != 0 ) {
                if ( cntOccurance[i] > 2 ){
                    cntOdds += cntOccurance[i] % 2;
                } else {
                    cntOdds += cntOccurance[i];
                }
            }
        }

        if ( cntOdds - 1 > k ){
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }

    return 0;
}