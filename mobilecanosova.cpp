#include <bits/stdc++.h>

typedef unsigned int ui;
using namespace std;

int main(){
	int N, T=1;
	while(true){
		cin>>N;

		if(N==0) break;

		vector<ui> nums(N+1, 0);
		for(int i=0; i<N; ++i) cin>>nums[i];

		cout << "Case " << (T++) << ":\n";

		for( int i = 0; i < N; ++i ){
			if( nums[i] + 1 != nums[i+1] ) {
				cout<<"0"<<to_string(nums[i])<<"\n";
			} else {
				cout<<"0"<<to_string(nums[i])<<"-";
				int subsequence = i+1;

				while(nums[subsequence]+1 == nums[subsequence+1] ) subsequence++;
				ui base = 10;
				ui start = nums[i];
				ui end = nums[subsequence];

				while( start-start%base != end - end%base) base *= 10;
				cout<<( nums[subsequence]%base )<<"\n";
				i = subsequence;
			}	
		}
		cout<<"\n";
	}
	return 0;
}
