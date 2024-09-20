#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int a;
        if(x>=y) a=y;
        else a=x;
        if(n%a!=0) cout<<n/a+1<<endl;
        else cout<<n/a<<endl;

    }
}