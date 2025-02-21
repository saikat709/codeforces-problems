#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;

    int k = 1;
    map<int, int> p; // cond_pos, num

    for( int i = 1; k <= 1000; i++ ){
        if ( !( i%3==0 || i%10==3 ) ){
            p[k++] = i;
        }
    }

    while ( t-- ){
        int a; cin >> a;
        cout << p[a] << endl;
    }

    return 0;
}