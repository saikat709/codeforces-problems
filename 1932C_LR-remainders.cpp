#include <bits/stdc++.h>
using namespace std;


// This is okay for very smaller n, but n <= 1e5
// NOT ACCEPTED
void solve1() {
    int n, m; cin >> n >> m;
    long long mult = 1;  // can not hold value when n is large 
    vector<int> v(n, 0);
    string s;

    for( int& i: v ){
        cin >> i;
        mult *= i;
    }
    cin >> s;

    int i = 0, j = n - 1;
    for( int k = 0; k < n; k++){
        cout << ( mult % m ) << " ";
        if ( s[k] == 'L' ) {
            mult /= v[i++];
        } else {
            mult /= v[j--];
        }
    }
    cout << "\n";
}


void solve2(){
    int n, m; cin >> n >> m;
    long long mult = 1;  // can not hold value when n is large 
    vector<int> v(n, 0);
    string s;



    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    freopen( "_in.txt",  "r", stdin  );
    freopen( "_out.txt", "w", stdout );

    int tt;
    cin >> tt;
    while (tt--) solve1();
    return 0;
}