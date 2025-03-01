#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){

	int t; cin>>t;
	while(t--){
		ll n, f, a, b;
		cin >> n >> f >> a >> b;

		ll prev = 0;
		for(ll i =0; i<n; ++i){
			ll cur; cin>>cur;

			if(f>b){
				f -= b;
			}else{
				f -= (cur-prev)*a;		
			}
			prev = cur;
			//if( f <= 0 ) break;
		}
		cout<<"$$ "<<f<<endl;
		cout<< ( f<=0 ? "NO" : "YES" ) <<endl;
		
	}	
	return 0;
}
