#include <bits/stdc++.h>
using namespace std;

// TLE
void solve() {
    int a, b, l; 
    cin >> a >> b >> l;
    int ans = 0;
    set<int> st;

    for( int k = 1; k <= l; ++k ){
        for( int x = 0; k*pow(a, x) <= l; ++x ){
            for( int y = 0; k*pow(a, x)*pow(b, y) <= l; ++y ){
                if ( k*pow(a, x)*pow(b, y) == l ){
                    st.insert(k);
                }
            }
        }
    }
    cout << st.size() << "\n";
}


void solve2() {
    int a, b, l; 
    cin >> a >> b >> l;
    int ans = 0;
    set<int> st;

    for( int i = 1; l%i == 0; i *= a ){
        for( int j = 1; l%(i*j) == 0; j *= b ){
            st.insert( (int) l/(i*j) );
        }
    }

    cout << st.size() << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // freopen( "_in.txt",  "r", stdin  );
    // freopen( "_out.txt", "w", stdout );

    int tt;
    cin >> tt;
    while (tt--) solve2();
    return 0;
}
