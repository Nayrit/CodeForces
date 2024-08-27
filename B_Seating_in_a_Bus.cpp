#include <iostream>
#include <vector>
#include <array>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string ans = "YES";
        cin >> n;
        vector<int>v(n+4);
        int y;
        cin>>y;
        v[y] = y;
     
        for (int i = 1; i < n; i++)
        {
            int x;
            cin>>x;
            v[x]=x;
            if(v[x-1] == 0 && v[x+1]==0){
                ans = "NO";
            }
        }
        
        cout<<ans<<endl;

    }
}