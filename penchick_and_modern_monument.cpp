#include <bits/stdc++.h>

using namespace std;
#define vi vector<int>

// to make it non-decreasing 
int calc_operations(vi v){
    if ( v.size() == 1 ) return 0;

    int increasing_sequence_length = 1;
    int l = 1;
    for( int i = 1; i < v.size(); ++i ){
        if ( v[i] >= v[i-1] ) l++;
        else l = 1;
        if ( l > increasing_sequence_length ) increasing_sequence_length = l;
    }
    
    return v.size() - increasing_sequence_length;
}


int main(){
    // freopen( "_input.txt", "r", stdin );
    int t, n; cin >> t;
    vi heights;

    while( t-- ){
        heights.clear(); cin >> n;

        for( int i = 0; i < n; ++i ){
            int tmp; cin >> tmp;
            heights.push_back(tmp);
        }

        cout << calc_operations(heights) << endl;
    }

    return 0;
}