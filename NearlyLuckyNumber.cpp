#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long x=n;
    int cnt=0;
    for(int i=0; n; i++){
        long long c =n%10;
        if(c==4 || c==7)
            cnt++;
        n=n/10;
    }
    if(cnt==4 || cnt==7 || cnt==44 || cnt==47 || cnt==74)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
