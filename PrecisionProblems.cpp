#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float n, x;
        for (int i = 0; i < t; i++)
        {
            cin >> n;

            x = (n * 100) / (100 - n);
            cout << x;
        }
    }
}