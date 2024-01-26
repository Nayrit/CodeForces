#include <bits/stdc++.h>
using namespace std;
int check_assembler(string s, string q)
{
    int freq[256] = {0};
    for (int i = 0; i < s.length(); i++)
        freq[s[i]]++;
    for (int i = 0; i < q.length(); i++)
    {
        freq[q[i]]--;
        if (freq[q[i]] < 0)
            return 2;
    }
    return 1;
}
int check_operand(string s, string z)
{
    int freq[256] = {0};
    for (int i = 0; i < s.length(); i++)
        freq[s[i]]++;
    for (int i = 0; i < z.length(); i++)
    {
        freq[z[i]]--;
        if (freq[z[i]] < 0)
            return 2;
    }
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        string s;
        cin >> s;
        if (N == s.size())
        {
            string z = "assembler";
            string q = "operand";
            int x = check_assembler(s, q);
            int y = check_operand(s, z);
            if (x == 1 || y==1)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
    return 0;
}