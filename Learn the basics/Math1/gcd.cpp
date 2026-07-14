// GCD (Greatest Common Divisor) is the largest positive number
// that divides both given numbers exactly without leaving any remainder.
// Example: GCD of 12 and 18 is 6.

#include <iostream>
using namespace std;

int main()
{
    int n1;
    int n2;
    int gcd;
    cout<<"Enter the Value of N1 And N2";
    cin>>n1>>n2;
    
    for(int i=1;i<=min(n1,n2);i++){
        
        if(n1%i==0 && n2%i==0){
         gcd=i;
       
            
        }
        
    }
    cout<<"Gcd is "<<gcd;

    return 0;
}