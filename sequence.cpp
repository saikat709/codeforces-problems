#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;

	for(int i=1; i<=t; ++i){
		int a, b;
		cin>>a>>b;

		long long start = (a-1) - (a-1)/3;
		if( (a-1)%3 != 0 ) start -= 1;

		long long end = b - b/3;
		if( b%3 != 0 ) end -= 1;
		
		int divisibleNums = end-start;	
		string res = "Case "+to_string(i)+": "+to_string(divisibleNums);
		cout<<res<<endl;
	}
	return 0;
}
