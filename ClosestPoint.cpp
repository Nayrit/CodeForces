#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    nayrit:
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        if (n > 2)
        {
            cout << "NO" << endl;
            goto nayrit;
        }
        if (v[1] - v[0] == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}