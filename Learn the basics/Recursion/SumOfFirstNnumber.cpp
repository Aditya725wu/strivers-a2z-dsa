/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std ;
 
  
 void aadi(int n, int sum){
     if (n<1){
         cout<<sum;
         return;
     }
     
     aadi(n-1,sum+n);
     
 }
int main()
{
    
    aadi(3,0);
cout<<  "Hello World";

    return 0;
}