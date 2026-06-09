#include <iostream>
using namespace std;

void diamond(int n)
{
    // Upper Half
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
            cout << " ";

        for(int j = 0; j < 2 * i + 1; j++)
            cout << "*";

        cout << endl;
    }

    // Lower Half
    for(int i = n - 2; i >= 0; i--)
    {
        for(int j = 0; j < n - i - 1; j++)
            cout << " ";

        for(int j = 0; j < 2 * i + 1; j++)
            cout << "*";

        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    diamond(n);

    return 0;
}