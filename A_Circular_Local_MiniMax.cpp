#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        vector<long> a(n);
        for(long p = 0; p < n; p++){
            scanf("%ld", &a[p]);
        }
        if(n % 2){
            puts("NO"); 
            continue;
        }
        sort(a.begin(), a.end());
        vector<long> b(n);
        for(long p = 0; p < n; p++){
            long idx = (2 * p + (2 * p >= n)) % n;
            b[idx] = a[p];
        }

        bool possible(true);
        for(long p = 0; possible && p < n; p++){
            long prev = (p - 1 + n) % n;
            long next = (p + 1 + n) % n;
            if( b[prev] <= b[p] && b[p] <= b[next]){
                possible = false;
            }
            if( b[prev] >= b[p] && b[p] >= b[next]){
                possible = false;
            }
        }

        if(!possible) {
            puts("NO");
        } else {
            puts("YES");
            for(long p = 0; p < n; p++){
                printf("%ld ", b[p]);
            }
            puts("");
        }

    }
    
    return 0;
}