#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    nayrit:
    while(t--){
        string s,n,a,b;
        int x;
        cin>>s;
        x=s.length();
        for(int i=1;i<x; i++){
            a = s.substr(0,i);
            b = s.substr(i);
            if(a[0] != '0' && b[0] != '0'){
                if(stoll(b)>stoll(a)){
                    cout<<a<<" "<<b<<endl;
                    goto nayrit;
                }
            }
        }
        cout<<-1<<endl;
    }
}