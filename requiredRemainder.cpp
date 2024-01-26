#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,cnt=0,temp=0;
    cin>>a>>b>>c;
    temp = c % a;
    if(c - temp + b <= c)
        cout << c - temp + b << endl;
    else
        cout << c - temp - a + b << endl;
    }
}
