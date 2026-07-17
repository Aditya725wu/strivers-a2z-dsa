#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n = nums.size();

        for(int i = 0; i < k; i++) {

            int last = nums[n - 1];

            for(int j = n - 1; j > 0; j--) {
                nums[j] = nums[j - 1];
            }

            nums[0] = last;
        }
    }
};
int main(){
    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;
    Solution solution;
    solution.rotate(nums, k);
    for(int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    return 0;
}
