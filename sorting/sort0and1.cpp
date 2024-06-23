#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeros = 0, ones = 0, n = nums.size();
        for(int num : nums) {
            if(num == 0) zeros++;
            else if(num == 1) ones++;
        }  

        for(int i = 0; i < zeros; i++) {
            nums[i] = 0;
        }

        for(int i = zeros; i < zeros + ones; i++) {
            nums[i] = 1;
        }

        for(int i = zeros + ones; i < n; i++) {
            nums[i] = 2;
        }
    }
};

int main() {
    Solution instance;
    vector<int> nums = {2,3,0,4,0,5,0,7};
    instance.sortColors(nums);

    for(int num : nums) {
        cout << num << " ";
    }

    return 0;
}