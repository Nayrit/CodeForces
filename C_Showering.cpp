#include <iostream>
#include <vector>
using namespace std;
void nayrit()
{
    int n, s, m;
    cin >> n >> s >> m;
    vector<int> l, r;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        int y;
        cin >> y;
        l.push_back(x);
        r.push_back(y);
    }
    sort(l.begin(), l.end());
    sort(r.begin(), r.end());
    if (l[0] - s >= 0)
    {
        cout << "YES" << endl;
        return;
    }
    if (m - r[n-1] >= s)
    {
        cout << "YES" << endl;
        return;
    }
    for (int i = 1; i < n; i++)
    {
        if (l[i] - r[i - 1] >= s)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        nayrit();
    }
}