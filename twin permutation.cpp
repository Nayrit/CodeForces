#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n),b(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        for(int i=0; i<n; i++){
            b[i]=n+1-v[i];
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
}
