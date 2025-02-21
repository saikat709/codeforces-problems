#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("_input.txt", "r", stdin);
 
    int n; cin >> n;
    vector<int> arr(n, 0);
    for( int i = 0; i < n; i++ ) cin >> arr[i];

    int start = 1, end = 1;
    bool flag = true;
    
    for( int i = 1; i < n; ++i ){
        if ( arr[i-1] > arr[i] ){
            if ( end != 1 ){
                flag = false;
                break;
            }

            start = i;
            while( i < n && arr[i-1] > arr[i] ) end = ++i;

            // swap 
            int temp = arr[start-1];
            arr[start-1] = arr[end-1];
            arr[end-1] = temp; 

            if ( start - 1 > 0 ){
                if ( arr[start-1] < arr[start-2] ) flag = false;
            }
            i--; 
        }
    }

    // for( int i = 0; i < n; i++ ) cout << arr[i] << " ";
    // cout << endl;

    if ( flag ){ cout << "yes\n" << start << " " << end  << endl; }
    else { cout << "no" << endl; }

    return 0;
}