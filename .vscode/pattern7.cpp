#include<iostream>
using namespace std;

int pattern7(int n){
    for (int i=0;i<=n;i++){
        for (int j=0;j<=n-i;j++){
            cout<<j+1<<" ";
    


        }
        cout<<endl;

    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;;
        pattern7(n);
        cout<<endl;

    }
}