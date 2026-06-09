#include<iostream>
using namespace std;

void pattern2(int n){
    for (int i=0;i<=n;i++){
        for(int j=n;j>=i;j--){
           cout<<i+1;
           
        }
        cout<<endl;

        }
    }
    int main(){
        int  t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            pattern2(n);
            cout<<endl;
        }
    }
