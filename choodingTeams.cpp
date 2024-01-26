#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,cnt=0;
    cin>>n>>k;
    vector<int>v;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x+k);
    }
    sort(v.begin(),v.end());
    for(int i=0; i<n; i++){
        if(v[i]>5){
            break;
        }
        cnt++;
    }
    cout<<cnt/3<<endl;
}
