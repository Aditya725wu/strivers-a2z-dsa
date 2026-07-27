class Solution {
public:
    int NthRoot(int N, int M) {
        int low = 1;
        int high = M;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            int val = pow(mid, N);

            if (val == M)
                return mid;
            else if (val < M)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return -1;
    }
};