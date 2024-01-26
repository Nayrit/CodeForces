#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int x=s.size();
        cout<<s[0];
        for(int i=1; i<x; i++){
            if(s[i]==s[i+1]){
                cout<<s[i];
                i++;
            }
        }
        cout<<s[x-1]<<endl;
    }
}
