#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w,i,c,s=0;
    cin>>k>>n>>w;
    for(i=1; i<=w; i++){
        s=s+(k*i);
        //cout<<s<<endl;
    }
    //cout<<s<<n<<endl;
    if(s>n)
        cout<<s-n<<endl;
    else
        cout<<0<<endl;
}

