#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k, cur, valid = 0; cin >> n >> k;

    while( n-- ){
        cin >> cur;
        if ( cur + k <= 5 ) valid++;
    }

    cout << valid/3 << endl;

    return 0;
}