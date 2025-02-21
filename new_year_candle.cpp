#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b; cin >> a >> b;

    int res = a;
    res += a/b;

    int extra_candle = a/b + a%b;
    while( extra_candle >= b ){
        res += extra_candle/b;
        extra_candle = extra_candle/b + extra_candle%b;
        // cout << "Extra: " << extra_candle << endl;
    }

    cout << res << endl;

    return 0;
}