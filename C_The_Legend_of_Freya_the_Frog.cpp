#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;
        int a = (ceil(double(x) / k));
        int b = (ceil(double(y) / k));
        if (a <= b) cout<<2*b<<endl;
        else cout <<(2*a)-1<<endl;
    }
}