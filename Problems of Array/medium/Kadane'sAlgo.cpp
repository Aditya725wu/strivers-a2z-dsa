class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int n=nums.size();
      int currentsum=nums[0];
      int maxi=nums[0];
       if(n==1){
        return currentsum;
         }


       for (int i= 1;i<=n-1;i++){
          currentsum+=nums[i];
          if(currentsum<nums[i]){
            currentsum=nums[i];
          }

       maxi=max(maxi, currentsum);

       if (currentsum<0){
        currentsum=0;
       }
         
         
       }

    return maxi;
    }
};