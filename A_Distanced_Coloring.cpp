#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int a,b;
        if(n<=k) a=n;
        else a=k;
        if(m<=k) b=m;
        else b=k;
        cout<<a*b<<endl;
    }
}