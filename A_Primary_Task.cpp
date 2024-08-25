#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        string s = to_string(n);
        if (s.length() < 3)
            cout << "NO" << endl;
        else
        {
            if (s[0] == '1' && s[1] == '0')
            {
                if (s[2] != '0')
                {
                    if (s.length() == 3 && s[2] == '1')
                        cout << "NO" << endl;
                    else
                        cout << "YES" << endl;
                }
                else
                    cout << "NO" << endl;
            }
            else
                cout << "NO" << endl;
        }
    }
}