#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,cnt=0;
        cin>>n;
        string s;
        vector<int>v(27,0);
        cin>>s;
        for(int i=0; i<n; i++){
            v[s[i]-64]++;
        }
        for(int i=1; i<27; i++){
            if(v[i]>=i){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}