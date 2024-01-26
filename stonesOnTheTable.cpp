#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int n,cnt=0;
    cin>>n>>s;
    for(int i=0; i<n; i++){
        if(s[i+1]==s[i])
            cnt++;
    }
    cout<<cnt<<endl;
}
