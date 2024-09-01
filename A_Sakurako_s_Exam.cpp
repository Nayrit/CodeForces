#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b;
        if(a==0 && b==1 || a==1 && b==0) cout<<"NO"<<endl;
        else if(b%2!=0 && a==0) cout<<"NO"<<endl;
        else if(b%2!=0 && a%2==0) cout<<"YES"<<endl;
        else if(b%2==0 && a%2==0) cout<<"YES"<<endl;
        else if(b%2==0 && a%2!=0) cout<<"NO"<<endl;
        else if(b%2!=0 && a%2!=0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
}