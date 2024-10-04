#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        for (int i = 0; i < x; i++)
        {
            x = x / 2;
            if (x == 0)
            {
                cout << "YES" << endl;
            }
            else if (x < 0)
            {
                cout << "NO" << endl;
            }

            else
                continue;
        }
    }
}
