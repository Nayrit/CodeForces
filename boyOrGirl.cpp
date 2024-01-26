#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    auto ans = unique(s.begin(), s.end());
    string c = string(s.begin(),ans);
    int a = c.size();
    if(a%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;

}
