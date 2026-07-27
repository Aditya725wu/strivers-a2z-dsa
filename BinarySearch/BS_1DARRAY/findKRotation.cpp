    class Solution {
    public:
        int findKRotation(vector<int>& nums) {
            int n=nums.size();
            int low=0;
            int high=n-1;
            int ans=INT_MAX;
           
int index=-1
;
            while(low<=high ){
                 if(nums[low] <= nums[high]){
                if(nums[low] < ans){
                    ans = nums[low];
                    index = low;
                }
                break;
            }

                int mid=(low+high)/2;

              
                   

                if (nums[low]<=nums[mid]){
                    if(nums[low]<ans){
                   ans=nums[low] ;
                   index=low;
                    }

                   low=mid+1;
                }

                else{
                    if(nums[mid]<ans){
                    ans=nums[mid];
                    index=mid;
                    }

                }
                
                

            }

    return index;

        }


    };