#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int count = 0;
    int left = 0, right = n - 1;
    while (left < right) {
        if (a[left] + a[right] == k) {
            count++;
            left++;
            right--;
        } else if (a[left] + a[right] < k) {
            left++;
        } else {
            right--;
        }
    }

    return count;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;
    }
    return 0;
}