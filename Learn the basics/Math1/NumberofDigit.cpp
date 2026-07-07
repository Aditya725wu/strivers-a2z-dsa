#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 0;

    while (n != 0)
    {
        int rem = n % 10;
        n = n / 10;   // Update the original n
        i++;          // Increment the original i
    }

    cout << "Number of digits = " << i;
    return 0;
}