    class Solution{
public:
    int lowerBound(vector<int> &nums, int x){
        int n=nums.size();

        for(int i=0;i<=n-1;i++){

            if(nums[i]>=target){

                return i;
            }
        }
   
   return n;
    }
};