#include <bits/stdc++.h>

using namespace std;

void print_and_next(long long n){
	cout<<n<<( n == 1? "\n" : " ");
	if( n==1 ) return;

	if( n%2 == 0 ) n /= 2;
	else n = n*3 +1;

	print_and_next(n);
}

int main(){
	long long n; cin>>n;
	print_and_next(n);
	return 0;
}
