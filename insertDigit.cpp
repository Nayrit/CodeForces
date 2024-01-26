#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,d, x=-1;
        string s, ans;
        cin>>n>>d>>s;
        for(int i=0; i<n; i++){
            if((s[i]-'0') <d){
                ans += '0' +d;
                x=i;
                break;
            }
            ans = ans + s[i];
        }
        if(x==-1)
            ans+= '0' +d;
        else{
            for(int i=x; i<n; i++)
                ans+= s[i];
        }
        cout<<ans<<endl;
    }
}
