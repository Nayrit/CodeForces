#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,cnt=0;
        cin>>n>>k;
        int a[n][n];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>a[i][j];
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(a[i][j] == a[n-i-1][n-j-1]){
                    cnt++;
                }
            }
        }
        cout<<(cnt>k ? "YES\n" : "NO\n");
    }
}
