#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;


ll fact(int n){ 
    return n == 1 || n == 0 ? 1 : n*fact(n-1);  
}

ll nCr(int n, int r){
    if ( r > n || r < 0 ) return 0;
    return fact(n) / ( fact(r) * fact( n-r )  );
}

// not accepted
int main(){
    cout << fixed << setprecision (12);

    string s1, s2;
    cin >> s1 >> s2;

    double total_dis = 0, passed_dis = 0,  q_marks = 0, delta_dis  = 0;
    for(const char& ch: s1) total_dis += ch == '+' ? 1 : -1; 
    for(const char& ch: s2){
        if( ch == '?' ) q_marks++;
        else if( ch == '+' ) passed_dis++;
        else passed_dis--;
    }
    delta_dis = total_dis - passed_dis;

    if ( q_marks == 0  ){
        cout << ( passed_dis == total_dis ? 1.0 : 0.0 ) << "\n";
        return 0;
    }

    if ( q_marks < delta_dis ){
        cout << 0.0 << "\n";
        return 0;
    }

    double total_possible_case = 1 << (int) q_marks;
    int required_plus = ( delta_dis + q_marks )/2;
    double succesfull_cases = nCr(q_marks, required_plus);
    
    cout << succesfull_cases/total_possible_case << endl;
    return 0;
}