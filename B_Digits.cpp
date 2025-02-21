#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;


ll fact(int n){ return ( n == 1 || n == 0 ) ? 1 : n * fact(n-1); }
bool divisibleBy1(int len, int d){ return true; }
bool divisibleBy2(int len, int d){ return d % 2 == 0; }
bool divisibleBy3(int len, int d){ return (len*d)%3 == 0;  } // sum of digits % 3 
bool divisibleBy4(int len, int d){ return (10*d+d)%4 == 0; }
bool divisibleBy5(int len, int d){ return d == 0 || d == 5; }
bool divisibleBy6(int len, int d){ return d%2 == 0 && d%3 == 0; }
bool divisibleBy7(int len, int d){
    int remainder = 0;
    while( len-- ) remainder = ( remainder*10 + d )%7;
    return remainder == 0;
}
bool divisibleBy8(int len, int d){ return (100*d + 10*d + d)%4 == 0; } // last three digits 
bool divisibleBy9(int len, int d){ return (len * d)%9 == 0;   }


int main(){
    int tt; cin >> tt;
    while( tt-- ){
        int n, d;  cin >> n >> d;
        cout << 1;
        if ( n >= 3 || d % 3 == 0 ) cout  << " " << 3;
        if ( d == 5  ) cout  << " " << 5;
        if ( d == 7 || n >= 3  ) cout  << " " << 7;
        if ( d == 9 || ( n >= 3 && d % 3 == 0 ) || n >= 6  ) cout  << " " << 9;
        cout << "\n";
    }
    return 0;
}


/*
a number is divisible by 7 iff, when this number is split into blocks of 3 digits 
(possibly with the first block shorter than 3 digits), the sign-alternating sum of these blocks is divisible by 7. 
Like, 1234569 is divisible by 7 because (1−234+569) is divisible by 7. 
If we apply this rule to our numbers from the problem, we can use the fact that when n≥3, 
the number can be split into several blocks of length 6, and each such block changes the alternating sum by 0. 
So, if n≥3 or d=7, our number is divisible by 7

n = 3, length = fact(3) = 6; eg. dddddd -> ddd - ddd = 0 is divisible by three
and if n > 3 it is just multiple of three like n = 5, length = fact(5) = 5*4*(3*2)
*/