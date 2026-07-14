#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5,3,7,8,2,1};
    int n = 6;

    for(int i=1;i<n-1;i++){
        int j=i;
        while(j>=0&&arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            j--;
        }

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}