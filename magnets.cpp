#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    vector<string> v;
    string s;
    cin>>s;
    v.push_back(s);
    for(int i=1; i<n; i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
        if(v[i]!=v[i-1]) count++;
    }
    cout<<count+1<<endl;
}

