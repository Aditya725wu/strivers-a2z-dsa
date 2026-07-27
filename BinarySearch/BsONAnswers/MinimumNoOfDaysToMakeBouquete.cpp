class Solution {
public:
  int possible(vector<int>& bloomDay, int day, int m, int k){
    int count=0;\
    int noB=0;

    for(int i=0;i<bloomDay.size();i++){
        if(bloomDay[i]<=day){
            count++;

        }
        else{
            noB=noB+(count/k);
            count=0;    

        }



    }
    
        noB+=(count/k);

return noB >= m;
   }

   
 int minDays(vector<int>& bloomDay, int m, int k) {
        int ans=-1;

   int low = *min_element(bloomDay.begin(), bloomDay.end());

  int  high = *max_element(bloomDay.begin(), bloomDay.end());

if((long long)m*k>bloomDay.size()){
    return -1;

}
    while(low<=high){
        int mid=(low+high)/2;

       if(possible( bloomDay,mid,m,k)==true){
            ans=mid;

            high=mid-1;

       }
       else{
        low=mid+1;
        
       }
    }

    return ans;
    }
};