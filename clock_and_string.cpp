#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;

    while( t-- ){

        int a, b, c, d;
        cin >> a >> b >> c >> d;

        bool flag = true;
        int prev = -1;

        for ( int i = 1; i <= 12; i++ ){

            // cout << "i: " << i << endl;
            // cout << "prev: " << prev_line << endl;

            if ( i == a || i == b || i == c || i == d){
            
                if ( i == a ){
                    if ( prev == b ) flag = false;
                } else if ( i == b ){
                    if ( prev == a ) flag = false;
                }

                if ( i == c ){
                    if ( prev == d ) flag = false;
                } else if ( i == d ){
                    if ( prev == c ) flag = false;
                }
                
                prev = i;                
            }
        }
        
        cout << ( flag ? "YES" : "NO" ) << endl;
    }
}