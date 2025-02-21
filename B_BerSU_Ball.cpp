#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

int main(){
    int n, m;

    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m;i++) cin >> b[i];
    sort(b.begin(), b.end());

    int i = 0, j = 0, ans = 0;
    while( i < n && j < m ){
        if( a[i] < b[j] - 1 ) i++;
        else if ( b[j] < a[i] -1 ) j++;
        else { ans++; i++; j++; }
    }
    cout << ans << '\n';
    return 0;
}