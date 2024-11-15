#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        int x,flag=0;
        cin>>x;
        v.push_back(x);
        //cout<<v[0]<<" ";
        for(int i=1; i<n; i++){
            cin>>x;
            v.push_back(x);
            //cout<<v[i]<<" ";
            if(abs(v[i-1]-v[i])==7 || abs(v[i-1]-v[i])==5) continue;
            else flag=1;
        }
        if(flag==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}