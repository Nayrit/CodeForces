#include <iostream>
using namespace std;
void solve(int n)
{
    int m = n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (j == i || j == (m + 1 - i))
                cout << ". ";
            else
                cout << "* ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    solve(n);
}