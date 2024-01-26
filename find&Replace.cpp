#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,flag=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j=j+2){
                if(s[i]==s[j] && flag==0){
                    cout<<"NO"<<endl;
                    flag=1;
                }
            }
        }
        if(flag == 0)
            cout<<"YES"<<endl;
    }
}
