#include <bits/stdc++.h>
    
using namespace std;
// red queen

void solve(){
    int n, x, y;
    string str;
    cin>>n>>x>>y>>str;
    
    int move_x = 0;
    int move_y = 0;
    
    for( int i=0; i<100; ++i){
        for(char mv: str){
            if( mv == 'N' ) move_y++;
            else if ( mv == 'S' ) move_y--;
            if( mv == 'E' ) move_x++;
            else if ( mv == 'W' ) move_x--;
        
            if( move_x == x && move_y == y){
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl; 
}
    
int main()
{
    int t; cin>>t;
    while(t--){
        solve(); 
    }
    return 0;
}