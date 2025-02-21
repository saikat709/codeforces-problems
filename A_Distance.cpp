#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;


int main(){
    int t; cin >> t;
    while(t--){
        int x, y; cin >> x >> y;
        int x1 = -1, y1 = -1;

        for( int i = 0; i <= 50; i++ ){
            for (int j = 0; j <= 50; j++) {
                if( 2*(i+j) == x+y && 2*( abs(x-i) + abs(y-j) ) == x+y ){
                    x1 = i;
                    y1 = j;
                }
            }
        }
        cout << x1 << " " << y1 << "\n";
    }
    return 0;
}