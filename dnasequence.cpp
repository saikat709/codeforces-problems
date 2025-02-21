#include <bits/stdc++.h>


using namespace std;

int main(){

	string str; cin>>str;
	
	int max_count = 1;
	int cur_count = 1;
	char prev = str[0];

	for(int i = 1; i<str.length(); i++){
		// cout<<(prev == str[i])<<endl;
		
		if ( prev == str[i] ) cur_count++;
		else cur_count = 1;
		
		if( cur_count > max_count ) max_count = cur_count;
		prev = str[i];
	}
	
	cout<<max_count<<endl;
	return 0;
}
