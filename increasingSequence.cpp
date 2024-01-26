#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,y=1;
        cin>>n;
        vector<int>v,b;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        if(v[0]!=1)
            b.push_back(1);
        if(v[0]==1){
            b.push_back(2);
        }
        for(int i=1; i<n; i++){
            //if(v[i]+1 != v[i+1]){
                if(b[i-1]+1 == v[i]){
                    y=y+1;
                }
                b.push_back(b[i-1]+y);
                y=1;
            //}
        }
        cout<<b[n-1]<<endl;
        for(int i=0; i<n; i++){
            cout<<b[i]<<" ";
        }
    }
}