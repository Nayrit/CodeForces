#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t,n;
    cin>>s>>t;
    n=s;
    reverse(s.begin(), s.end());
    if(s==t)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
