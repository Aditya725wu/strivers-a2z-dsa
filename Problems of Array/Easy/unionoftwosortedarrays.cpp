#include<iostream>
using namespace std;
#include <vector>
#include <set>

class solution{
    public:
    vector<int> unionArray(vector<int> &arr1, vector<int> &arr2){
        
        vector<int> ans;
        int n=arr1.size();
        int m=arr2.size();

        set<int> s;
        for(int i=0;i<=n-1;i++){
            s.insert(arr1[i]);

        }

        for(int i=0;i<=m-1;i++){
            s.insert(arr2[i]);
        }
          
        for(auto it=s.begin();it!=s.end();it++){
            ans.push_back(*it);        }
            
            return ans;
    }
};
int main(){

    vector<int> arr1={1,5,6,7,8};
    vector<int> arr2={2,4,5,7,8,9};
    solution s;

      s.unionArray(arr1,arr2);

    
      return 0;

}