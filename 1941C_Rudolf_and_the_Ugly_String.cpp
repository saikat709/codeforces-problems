#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt; cin >> tt;
    while( tt-- ){ 
        int n, count = 0; string s;
        cin >> n >> s;

        for( int i = 0; i < n - 2; i++ ){
            string cur = s.substr(i, 3);

            if ( cur == "pie" || cur == "map" ){
                count++;
                i += 2;
            }
        }
        cout << count << endl;
    }

    return 0;
}