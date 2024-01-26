#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c=0;
    vector<int>v;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(int i=1; i<n; i++){
        if(v[0]>=v[i]){
            c=c+(v[0]-v[i]);
        }
    }
    cout<<c<<endl;
}
