#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==2) cout<<1<<endl;
        else if(n%4==0) cout<<n/4<<endl;
        else cout<<n/4+1<<endl;
    }
}