#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int cnt=0;
    for(int i=0; i<4; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    if(v[0]==v[1] || v[0]==v[2] || v[0]==v[3])
        cnt++;
    if(v[1]==v[2] || v[1]==v[3])
        cnt++;
    if(v[2]==v[3])
        cnt++;
        cout<<cnt<<endl;
}
