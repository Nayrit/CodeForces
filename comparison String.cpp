#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt=1,maximum=1;
        for(int i=1; i<n; i++){
            if(s[i]==s[i-1]){
                cnt++;
            }
            else{
                maximum=max(maximum,cnt);
                cnt=1;
            }
        }
        maximum=max(maximum,cnt);
        cout<<maximum+1<<endl;

    }
}
