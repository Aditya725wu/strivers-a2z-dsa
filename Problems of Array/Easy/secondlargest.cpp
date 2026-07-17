#include<iostream>
using namespace std;
#include <climits>

int main{
    
    int arr[]={5,3,6,7,90,1};
    int n=6;

    int largest=arr[0];
   int secondlargest = INT_MIN;
    
    for(int i=1;i<n-1;i++){
          
        if(arr[i]>largest){
            secondlargest=largest;
            largest=arr[i];
            
        }
        else if (arr[i] > secondlargest && arr[i] != largest){
            secondlargest=arr[i];
            
        }
        
    }
    cout<<"secondlargest"<<secondlargest;
}