#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        if (n % 2 == 0)
            cout << -1 << endl;
        else
        {
            for (int i = 1; i <= n; i = i + 2)
                cout << i << " ";
            for (int i = n - 1; i >= 2; i = i - 2)
                cout << i << " ";
            cout << endl;
        }
    }
}