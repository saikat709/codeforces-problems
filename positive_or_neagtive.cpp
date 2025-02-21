#include <bits/stdc++.h>

using namespace std;

int main(){
        int n; cin>>n;
        int positives = 0;
        int negatives = 0;
        for(int i =1; i<=n; ++i){
                int a; cin>>a;
                if ( a >0 ) positives++;
                else if( a<0) negatives++;
        }

        cout<<"Positive: "<<positives<<"\n";
        cout<<"Negative: "<<negatives<<"\n";
        return 0;
}

