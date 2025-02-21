#include <iostream>
#include <string>

using namespace std;

int main(){
    int t; cin >> t;

    while( t-- ){
        string s; cin >> s;
        
        if ( s[0] < s[2] ) {
            cout << s[0] << "<" << s[2] << endl;
        } else if ( s[0] > s[2]){
            cout << s[0] << ">" << s[2] << endl;
        } else {
            cout << s[0] << "=" << s[2] << endl;
        }
    }
    return 0;
}