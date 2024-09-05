#include<iostream>
using namespace std;
int main(){
    int k,n,w,a,b=0;
    cin>>k>>n>>w;
    for(int i=1; i<=w; i++){
        a=k*i;
        b+=a;
    }
    if(b<=n) cout<<0<<endl;
    else cout<<abs(b-n)<<endl;
}