#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt=0;
        for(int i=0; i<=n; i++){
            for(int j=0; j<=n; j++){
                if(i==n-j) {
                    cout<<i<<" "<<j<<endl;
                    cnt++;
                }
            }
        }
        
        cout<<cnt-2<<endl;
    }
}