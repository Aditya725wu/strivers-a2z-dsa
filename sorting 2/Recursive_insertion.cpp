#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void insertionSort(vector<int>& arr, int n) {

        // Base Case
        if (n <= 1) {
            return;
        }

        // Step 1: Sort the first (n-1) elements
        insertionSort(arr, n - 1);

        // Step 2: Insert the last element into the sorted part
        int last = arr[n - 1];
        int j = n - 2;

        while (j >= 0 && arr[j] > last) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = last;
    }
};

int main() {

    Solution obj;

    vector<int> nums = {7, 4, 8, 2, 1};

    int n = static_cast<int>(nums.size());

    obj.insertionSort(nums, n);

    cout << "Sorted Array: ";

    for (int x : nums) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}