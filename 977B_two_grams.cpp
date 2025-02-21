#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; string s;
    cin >> n >> s;
    map<string, int> mp;

    for( int i = 0; i < n -1; i++ ){
        string cur = s.substr(i, 2);
        mp[cur]++;
    }

    pair<string, int> result = { "", INT_MIN };

    for( const pair<string, int> p: mp ){
        if ( result.second < p.second  ){
            result = p;
        }
    }

    cout << result.first << endl;
}