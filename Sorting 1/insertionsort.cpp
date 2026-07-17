#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5,3,7,8,2,1};
    int n = 6;

    for(int i=1;i<n;i++){
        int j=i;
        while(j>=0&&arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            j--;
        }

    }
    
    return 0;
}