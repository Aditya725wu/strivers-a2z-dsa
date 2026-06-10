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
 void pattern10(int n){
     
    for (int i=0;i<=2*n-1 ;i++){
        
     int stars;

       if (i<=n){
        stars= i;
       } 
        else {
             stars=2*n-i;
        }
    
        for( int j=0;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;

       }
    }

    void pattern11(int n){
        for(int i=1;i<=n;i++){
            int start ;
            if(i%2==0){
                start=0;
            }
            else{
                start=1;

            }
            
            for (int j=1;j<=i;j++){
                cout<<start;
                start=1-start;
                
            }
            cout<<endl;

        
    }
}
void pattern12(int n){
    for(int i=0;i<=n;i++){
        //numbers;
        for(int j=1;j<=i;j++){
            cout<<j;

        }
        
        for(int j=0;j<=2*(n-i);j++){
            cout<<" ";
        }


        for(int j=i;j>=1;j--){
            cout<<j;
            
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
            pattern12(n);
        }

        }
    