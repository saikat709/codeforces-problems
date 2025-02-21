#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;

    vector<string> v;
    vector<string> c;
    vector<string> vc;

    for(int i = 0; i < s.size(); i++ ){
        if ( i <s.size()-1 ){
            if ( s[i] == 'N' && s[i+1] == 'G' ){
                c.push_back("NG");
                i++;
                continue;
            }
        }

        if ( s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' ){
            v.push_back(string(1, s[i]));
        }

        if ( s[i] == 'Y' ){
            vc.push_back(string(1, s[i]));
        }
    }

    sort(c.begin(), c.end(), [](string a, string b){
        return a.size() > b.size();
    });

    int c_count = c.size();
    int v_count = v.size();
    int vc_count = vc.size();

    while ( vc_count > 1 ){
        if ( v_count*2 < c_count ) v_count++; 
        if ( v_count*2 > c_count ) c_count++;
        vc_count--;
    }


    int res = 0;
    for( int i = 0; v_count < 0 && c_count < 1; ++i ){
        res += 3;
        c_count  -= 2;
        
    }

    return 0;
}