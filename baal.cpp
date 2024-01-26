#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int a = 0, b = 0, c = 0, i = 0;
        for (int x : v)
        {
            if (x == 1)
                a = i;
            else if (x == 2)
                b = i;
            else if (x == n)
                c = i;
            i++;
        }
        if (c != 0 && c != n - 1)
        {
            if (a < c)
                cout << b + 1 << " " << c + 2 << endl;
            else
                cout << b + 1 << " " << c << endl;
        }
        else
        {
            if (c < a && b < a)
                cout << b + 1 << " " << c + 1 << endl;
            else if (c > a && b > a)
                cout << b + 1 << " " << c + 1 << endl;
            else
                cout << a + 1 << " " << c + 1 << endl;
        }
    }
}
