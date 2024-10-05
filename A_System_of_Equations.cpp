#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a,b,cnt=0;
    cin>>n>>m;
    if(n>=m) a=n;
    else a=m;
    b=sqrt(a)+1;
    for(int i=0; i<=b; i++){
        for(int j=0; j<=b; j++){
            if((i*i)+j==n && (j*j)+i==m){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
}