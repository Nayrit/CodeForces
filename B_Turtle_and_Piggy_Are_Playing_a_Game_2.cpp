#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m,n;
        cin >> m;
        vector<int> v;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
            n=m/2;
            cout<<v[n]<<endl;
    }
}