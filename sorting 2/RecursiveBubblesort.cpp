#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void bubbleSort(vector<int>& arr, int n) {

        // Base Case
        if (n == 1) {
            return;
        }

        // One pass of Bubble Sort
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
            }
        }

        // Recursive Call
        bubbleSort(arr, n - 1);
    }
};

int main() {

    Solution obj;

    vector<int> nums = {7, 4, 8, 2, 1};

    size_t n = nums.size();

    obj.bubbleSort(nums, n);

    cout << "Sorted Array: ";

    for (int x : nums) {
        cout << x << " ";
    }

    return 0;
}