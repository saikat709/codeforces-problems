#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt; cin >> tt;
    
    while(tt--){
        int n; cin >> n; 
        map<int, int> fq;
        int max_occurance = 0;
        int unique = 0;
        
        for( int i=0; i<n; i++){
            int a; cin >> a; fq[a]++;
            if ( fq[a] == 1 ) unique++;
            max_occurance = max( max_occurance, fq[a] );
        }
        unique--;
        
        if      ( n == 1 )                  cout << 0 << "\n";
        else if ( n == 2 )                  cout << 1 << "\n";
        else if ( unique > max_occurance )  cout << max_occurance << "\n";
        else if ( unique == max_occurance ) cout << unique << "\n";
        else                                cout << min(unique + 1, max_occurance - 1 ) << "\n";
    }

    return 0;
}