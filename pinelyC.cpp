#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int arr1[n],arr2[n];
        for(int i=0; i<n; i++)
            cin >> arr1[i];
        for(int i=0; i<n; i++)
            arr2[i]= arr1[i];
        long long int ans, j = 2;
        while (j <= __INT_MAX__)
        {
            set<int> st;
            for(int i=0; i<n; i++)
                st.insert(arr2[i] % j);
            if (st.size() == 2)
            {
                ans = j;
                break;
            }
            j *= 2;
        }
        cout << ans << endl;
    }
    return 0;
}
