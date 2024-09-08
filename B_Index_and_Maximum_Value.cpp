#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n, m;
    cin>>n>>m;
    vector<long long int> vec(n);
    for(int i = 0; i<n; i++) cin>>vec[i];
    sort(vec.begin(), vec.end());
    long long int hehe = vec[n-1];
    for(int i = 0; i<m; i++)
    {
        char c;
        long long int left, right;
        cin>>c>>left>>right;
        if(hehe>=left && hehe<=right)
        {
            if(c == '+') hehe++;
            else hehe--;
        }
        cout<<hehe<<" ";
    }
    cout<<endl;
    }
}