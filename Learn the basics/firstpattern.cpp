#include<iostream>
using namespace std ;

void pattern1(int n){
    for (int i=0;i<n;i++){
        for ( int j=0;j<n;j++){
            cout<<"*";

        }
        cout<<endl;
    }
}
void pattern2(int n){
    for (int i=0;i<=n;i++){
        for (int j=0;j<=i;j++){
            cout<<"*";

        

    }
    cout<<endl;

}
}

void pattern3(int n){
    for (int i=0;i<=n;i++){
        for (int j=0;j<=i;j++){
            cout<<j+1<<" ";

        

    }
    cout<<endl;

}
}
void pattern4(int n){
    for (int i=0;i<=n;i++){
        for (int j=0;j<=n-i;j++){
            cout<<"*";
        }
        cout<<endl;

    }
}

 void pattern5(int n){
    for (int i=0;i<=n;i++){
        for (int j=0;j<=n-i;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;

    }
}

void pattern7(int n){
    for(int i=0;i<=n;i++){
        // left spaces
        for(int j=0;j<=n-i;j++){
            cout<<" ";
        }
        // stars
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        // right spaces
        for(int j=0;j<=n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

    int main(){
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            pattern7(n);
        }

        }
    