#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,x=0;
    vector<int>v;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a>>b;
        x=x-a;
        x=x+b;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    cout<<v[n-1]<<endl;
}
