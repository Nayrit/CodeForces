#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,sum=0;
        cin>>n>>k;
        vector<int>v;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        for(int i=0; i<k; i++){
            sum+=v[i];
        }
        cout<<sum<<endl;
    }

}