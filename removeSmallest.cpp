#include<bits/stdc++.h>
using namespace std;
void nayrit(){
    int n;
        cin>>n;
        vector<int>v;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        for(int i=1; i<n; i++){
            if(v[i]-v[i-1] > 1){
                cout<<"NO"<<endl;
                return;
            }
        }
        cout<<"YES"<<endl;
        return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        nayrit();
    }
}
