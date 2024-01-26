#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,cnt=0;
    cin>>n>>k;
    int t=240-k;
    int c=t;
    for(int i=1; i<=n; i++){
        if(c>=i*5)
            cnt++;
        c=c-i*5;
    }
    cout<<cnt<<endl;
}
