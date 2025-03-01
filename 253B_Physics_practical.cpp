#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n; cin >> n;
    int arr[n];
    for( int& i : arr ) cin >> i;

    sort(arr, arr+n);

    int i = 0, j = 0, removal = INT_MAX;

    while( j < n){
        // cout << " $ " << arr[i] << " " << arr[j] << endl;
        if( arr[i]*2 >= arr[j] ){
            removal = min(removal, i + ( n-j-1) );
            j++;
        } else {
            i++;
        }
    }
    cout << removal << endl;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    // freopen("input.txt",  "r", stdin );
    // freopen("output.txt", "w", stdout );

    int tt = 1; //cin >> tt;

    while ( tt-- ) solve();

    return 0;
}