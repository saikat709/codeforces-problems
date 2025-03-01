#include <bits/stdc++.h>


using namespace std;

int main(){

	long n; cin>>n;
	for(long k=1; k<=n; ++k){
		long total_ways     = k*k*(k*k-1)/2;
		long attacking_ways = k*(k-1)*(k-2);
		cout<<(total_ways - attacking_ways)<<endl;
	}
	return 0;
}
