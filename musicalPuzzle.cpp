#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        set<string>v;
        cin>>n;
        cin>>s;
        for(int i=1; i<n; i++){
            v.insert(s.substr(i-1,2));
        }
        cout<<v.size()<<endl;
    }
}
