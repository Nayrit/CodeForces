#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n==1) cout<<"0"<<endl;
        else{
            int ans = 1;
            while ((n>k)){
                n=n-(k-1);
                ans++;
            }
            cout<<ans<<endl;
        }
    }
}