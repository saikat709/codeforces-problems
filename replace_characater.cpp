#include <bits/stdc++.h>
using namespace std;

// not accepted ...
int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("_input.txt", "r", stdin);
    #endif

    int t; cin >> t;
    
    while ( t-- ){
        int n; cin >> n;
        string s; cin >> s;

        char max_occurance_char = s[0];
        char min_occurance_char = s[0];
        int max_occurance = 0;
        int min_occurance = INT_MAX;

        map<char, int> fq;

        for( int i = 0; i < n; i++){
            fq[s[i]]++;
        }

        for( auto p: fq ){
            if ( p.second > max_occurance ){
                max_occurance = p.second;
                max_occurance_char = p.first;
            } else if ( p.second < min_occurance ){
                min_occurance = p.second;
                min_occurance_char = p.first;
            }
            // cout << "##: " << p.second << " MIN: " << min_occurance_char << endl;
        }
        
        for( int i = 0; i < n; i++){
            // cout << "CUR: "<< s[i] << " Match: " << (s[i] == min_occurance_char) << endl;
            if ( s[i] == min_occurance_char ){
                s[i] = max_occurance_char;
                break;
            }
        }

        cout << s << endl;
    }

    return 0;
}