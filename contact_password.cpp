#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k; cin>>n>>k;

    string result = "";
    for(int i=0; i<n; ++i){
        int ind = i%k;
        // cout<<"Ind: "<<ind<<endl;
        result += 'a' + ind;
    }
    cout<<result<<endl;
    return 0;
}