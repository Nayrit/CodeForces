#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,k;
    cin>>n>>k;
    if(n%2!=0)
        n=n+1;
    if(k>n/2)
        cout<<(k-n/2)*2<<endl;
    else
        cout<<(2*k-1)<<endl;   
}