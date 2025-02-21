#include <bits/stdc++.h>

using namespace std;

int main(){
	int l; cin >> l;
	int x = 0, y = 0, z = 0;

	while( l-- ) {
		int a, b, c;
		cin >> a >> b >> c;
		x += a; y += b; z += c;
	}

	if( x + y+ z == 0 )  cout << "YES" << endl;
	else  cout << "NO" << endl;
	
	return 0;
}
