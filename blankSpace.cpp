#include<bits/stdc++.h>
using namespace std;
int longest(vector<int>c)
{
    int mxlen = 0;
    int currLen = 0;

    for (int i = 0; i<c.size(); i++)
    {
        if (c[i] == 0)
        {
            currLen++;
        }
        else
        {
            if (currLen > mxlen)
            {
                mxlen = currLen;
            }
            currLen = 0;
        }
    }

    if (currLen > mxlen)
    {
        mxlen = currLen;
    }

    return mxlen;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        int c=longest(v);
        cout<<c<<endl;
    }
}
