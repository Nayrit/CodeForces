#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        n--;
        vector<int> v(n), b(n+1);
        for(int i=0; i<n; i++)
            cin>>v[i];
        b[0] = v[0];
        b[n] = v[n-1];
        for(int i=0; i<n-1; i++)
            b[i+1] = min(v[i], v[i+1]);
        for(int i=0; i<n+1; i++)
            cout<<b[i]<<" ";
        cout<<endl;
    }
}
