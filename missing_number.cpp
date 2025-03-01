#include <bits/stdc++.h>

using namespace std;

int solution2(){
	int n, a; cin >> n;
	long long sum = 0;
	for(int i=0; i<n-1; i++) {
		cin >> a; sum += a;
	}
	return n*(n+1)/2 - sum;
}

int main(){
	int n; cin>>n;
	vector<int> nums(n-1);

	for(int i=0; i < n-1; i++) cin >> nums[i];

	sort(nums.begin(), nums.end());
	for(int i=1; i<=n; ++i){
		if (i != nums[i-1]){
			cout << i << endl;
			return 0;
		}
	}
	
	return 0;
}
