#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string nayrit;
        cin >> nayrit;
        map<char,int> lopa;
        int n = 0;
        for (int i = 0; i < nayrit.size(); i++)
        {
            if (nayrit[i]>='a' && nayrit[i]<='z')
                lopa[nayrit[i]]=1;
            else
            {
                char m = nayrit[i]+32;
                if (lopa[m] == 0)
                {
                    n = 1;
                    break;
                }
            }
        }
        if (n == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}