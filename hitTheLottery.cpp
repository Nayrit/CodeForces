#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,cnt=0;
    cin>>n;
    label:
    if(n>=100){
        n=n-100;
        cnt++;
        goto label;
    }
    if(n>=20){
        n=n-20;
        cnt++;
        goto label;
    }
    if(n>=10){
        n=n-10;
        cnt++;
        goto label;
    }
    if(n>=5){
        n=n-5;
        cnt++;
        goto label;
    }
    if(n>=1){
        n=n-1;
        cnt++;
        goto label;
    }
    cout<<cnt<<endl;
}
