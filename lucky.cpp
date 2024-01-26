#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string f;
        cin>>f;
        vector<int>v,b;
        int s,a;
        for(int i=0; i<3; i++){
            v.push_back(f[i]-'0');
        }
        for(int i=3; i<6; i++){
            b.push_back(f[i]-'0');
        }
        s= accumulate(v.begin(),v.end(),0);
        a= accumulate(b.begin(),b.end(),0);
        if(s==a)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
