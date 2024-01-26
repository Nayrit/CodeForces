#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    string s;
    int sum=0,j=0;
    for (int i=0; i<4; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cin>>s;
    sort(s.begin(),s.end());
    for (int i=0; i<s.size(); i++)
    {
        if(s[i] -'0' == 1)
            sum = sum + v[0];
        else if(s[i]-'0'==2)
            sum = sum + v[1];
        else if(s[i]-'0'==3)
            sum = sum + v[2];
        else
            sum = sum + v[3];
    }
    cout<<sum;
}
