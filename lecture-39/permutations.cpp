#include<iostream>
using namespace std;

void solve(vector<vector<int>> &ans, vector<int> nums, int index){
        // base case
        if(index >= nums.size()){
            ans.push_back(nums);
            return;
        }

        for(int j=index; j<nums.size(); j++){
            swap(nums[index], nums[j]);
            solve(ans, nums, index+1);
            //backtracking
            swap(nums[index], nums[j]);
        }
    }


int main(){

    int nums[] = {1,2,3};

        vector<vector<int>> ans;
        int index = 0;
        solve(ans, nums, index);

    return 0;
}