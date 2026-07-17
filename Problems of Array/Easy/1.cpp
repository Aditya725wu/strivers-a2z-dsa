//check if array is sorted and rotated

class Solution {
public:
    bool check(vector<int>& nums) {

        int n = nums.size();      // Size of array
        int count = 0;            // Count how many times order breaks

        for (int i = 0; i < n; i++) {

            // Compare current element with the next element.
            // If i is the last index, compare it with the first element.
            if (nums[i] > nums[(i + 1) % n]) {
                count++;          // Found one break
            }
        }

        // 0 or 1 break = sorted or sorted & rotated
        // More than 1 break = not possible
        return count <= 1;
    }
};