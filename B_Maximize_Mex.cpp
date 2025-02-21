#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

int main(){
    int tt; cin >> tt;
    while( tt-- ){
        int n, x; cin >> n >> x;
        map<int, int> cnt;
        map<int, int> cnt_av;

        for( int  i = 0; i < n; i++ ){
            int a; cin >> a;
            cnt[a]++;
        }

        for( ll  i = 0; i <= n; i++ ){
            if ( i == n ){
                cout << i << "\n";
                break;
            }

            if ( cnt[i] == 0 ){
                // check if that number available
                // TODO
                cout << i << "\n";
                break;
            }

            if ( cnt[i] > 1 ){
                cnt_av[i] = cnt[i] - 1;
                cnt[i] = 1;
            }


        }
    }
    return 0;
}

/*
//**** TLE on 4th case *****
int main(){
    int tt; cin >> tt;
    while( tt-- ){
        int n, x; cin >> n >> x;
        map<int, int> cnt;

        for( int  i = 0; i < n; i++ ){
            int a; cin >> a;
            cnt[a]++;
        }

        for( ll  i = 0; i <= n; i++ ){
            if ( cnt[i] == 0 || i == n ){
                cout << i << "\n";
                break;
            }

            if ( cnt[i] > 1 ){
                int usable = cnt[i] - 1;
                ll last = i;
                while( usable-- ){
                    while( cnt[last] != 0 && last <= n ) last += x; 
                    cnt[last]++;
                    cnt[i]--;
                }
            }
        }
    }
    return 0;
}
*/