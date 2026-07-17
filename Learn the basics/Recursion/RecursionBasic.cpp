#include<iostream>
using namespace std;

int rucr(int n, int sum){
    if (n<1){
        
         cout<<sum<<"\n";
        return 0;
       
    }


    rucr(n-1,sum+n);
   

}
int main(){

    rucr(5,0);
    return 0;

}