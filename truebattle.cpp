#include <bits/stdc++.h>

using namespace std;

int main(){

	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		string str; cin>>str;
		
		bool flag = false;
		if(str[0] == '1' &&  str[n-1] == '1') { flag = true; }

		for(int i=1; i<n-1; i++){
			if(str[i] == '1' && str[i+1] == '1'){ flag = true; }
		}
		
		if(n==2) { flag = true; }
			
		cout<<( flag? "YES" : "NO" )<<endl; }
	return 0;

}
