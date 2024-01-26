#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1;
    sort(s1.begin(),s1.end());
    for(int i=(s1.size()/2); i<s1.size(); i++)
    {
        cout<<s1[i];
        if(i<s1.size()-1)
            cout<<"+";
    }
    cout<<s2<<endl;
}
