#include<iostream>
using namespace std;

void pattern2(int n){
    for (int i=0;i<=n;i++){

        //space
        for(int j=n;j>=i;j--){
        cout<<" ";

        }

        //stars
        for(int j=0;j<=2*i+2;j++)
        {
            cout<<"*";

        }
        //space
        
       for(int j=n;j>=i;j--){
        cout<<" ";
        

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
