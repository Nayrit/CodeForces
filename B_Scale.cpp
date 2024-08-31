#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<string>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        if(n==k){
            cout<<(v[0])[0]<<endl;
        }
        else{
            for(int i=0;i<n;i+=k){
                for(int j=0;j<n;j+=k){
                    cout<<(v[i])[j];
                }
                cout<<endl;
            }
        }
    }
}