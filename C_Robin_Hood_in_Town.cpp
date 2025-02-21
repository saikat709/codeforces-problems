#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

int main(){
    int tt; cin >> tt;
    while( tt-- ){
        int n, nHalfThElement = 0; cin >> n;
        ll sum = 0, ans = -1;
        vector<int> golds(n);
        for (int i = 0; i < n; i++) {
            cin >> golds[i];
        }

        if ( n <= 2 ){
            cout << -1 << "\n";
            continue;
        }

        sum = accumulate(golds.begin(), golds.end(), 0ll);
        sort(golds.begin(), golds.end());

        nHalfThElement = golds[ n/2 ]; // actually happening floor(n/2) + 1
        ans = 2ll*n*nHalfThElement - sum + 1;

        cout << max(ans, 0ll ) << endl;
    }
    return 0;
}

/**
 * Idea dehind this is: we take the n/2+1 th num after sorted.
 * then assume, it is equal to half of the avg after adding x
 * thus calculate the x using  (n/2+1)th =  ( sum + x / n ) / 2
 * i need to add 1 to that x to fulfil the condition ( as not equal ) but not minus value
 */