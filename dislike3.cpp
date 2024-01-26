#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        vector<int>a;
        cin >> n;
        int i = 1;
        while (a.size() != 1000)
        {
            if (i % 3 != 0 && i % 10 != 3)
                a.push_back(i);
            i += 1;
        }
        cout << a[n - 1] << endl;
    }
}
