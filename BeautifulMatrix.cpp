#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v;
    for(int i=0; i<5; i++)
    {
        vector<int> a;
        for(int j=0; j<5; j++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        v.push_back(a);
    }
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(v[i][j]==1)
            {
                int q=abs(2-i);
                int w=abs(2-j);
                int e=q+w;
                cout<<e<<endl;
            }
        }
    }
}

