
#include<iostream>
#include<vector>
using namespace std ;

class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int n=arr.size();
        for (int i=0;i<=n-1;i++){

            for(int j=0;j<n-1;j++){
                if(arr[j]==0){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;

                }

            }
        }
    }
};
int main(){
    vector<int> arr={0,1,0,3,12};
    Solution solution;
    solution.moveZeroes(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
} 