#include <iostream>
using namespace std;
void nayrit()
{
    int a[4];
    for (int i = 0; i < 4; i++)
        cin >> a[i];
    int sum = 0;
    if (a[0] >= a[2])
    {
        if (a[0] > a[2])
        {
            if (a[1] == a[3])
                sum++;
        }
        if (a[1] > a[3])
            sum++;
    }
    if (a[0] >= a[3])
    {
        if (a[0] > a[3])
        {
            if (a[1] == a[2])
                sum++;
        }
        if (a[1] > a[2])
            sum++;
    }
    if (a[1] >= a[2])
    {
        if (a[1] > a[2])
        {
            if (a[0] == a[3])
                sum++;
        }
        if (a[0] > a[3])
            sum++;
    }
    if (a[1] >= a[3])
    {
        if (a[1] > a[3])
        {
            if (a[0] == a[2])
                sum++;
        }
        if (a[0] > a[2])
            sum++;
    }
    cout << sum << '\n';
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