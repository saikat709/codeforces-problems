#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;


int main(){
    int n; cin >> n;
    ll ans = ( 2LL << n  ) - 2;   // 2 ^ ( n+1 ) - 2

    cout << ans << endl;
    return 0;
}