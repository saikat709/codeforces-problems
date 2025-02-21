#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, cur_num;
    vector<int> nums;
    
    ifstream input_file("input.txt");
    ofstream output_file("output.txt");

    if(input_file.is_open()){
        input_file>>n;
        for(int i=0; i<n; ++i) {
            input_file>>cur_num;
            nums.push_back(cur_num);
        }
    }

    sort(nums.begin(), nums.end());

    if ( nums[n-1] <= 2*nums[0] ){
        if ( output_file.is_open() ){
            output_file<<0<<endl;
        }
        return 0;
    }

    int left_side = 1;
    while( !(nums[n-1] <= 2*nums[left_side]) ){
        left_side++;
    }

    int right_side = 1;
    while( !(nums[n-1-right_side] <= 2*nums[0]) ){
        right_side++;
    }

    if ( output_file.is_open() ){
        output_file<<min(left_side, right_side)<<endl;
    }
    return 0;
}