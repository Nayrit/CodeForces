#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<7 || n==9){
            cout<<"NO"<<endl;
        }
        else if(n%3==0){
            cout<<"YES"<<endl;
            cout<<n-5<<" "<<"1 4"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            cout<<"1 2 "<<n-3<<endl;
        }
    }
}