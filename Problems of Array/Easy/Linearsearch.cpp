#include <vector>
using namespace std;
#include <iostream>

class Solution {
public:
    int linearSearch(vector<int>& nums, int target) {

        int n = nums.size();

        for(int i = 0; i < n; i++) {

            if(nums[i] == target) {
                return i;
            }
        }

        return -1;
    }
};

int main() {
    vector<int> nums = {4, 2, 7, 1, 3};
    int target = 7;

    Solution solution;
    int index = solution.linearSearch(nums, target);

    if(index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}